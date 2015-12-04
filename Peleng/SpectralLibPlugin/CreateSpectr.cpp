#include "CreateSpectr.h"
#include "ui_CreateSpectr.h"

#include "../Library/Types.h"
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

#include "../Library/GenericExc.h"

CreateSpectr::CreateSpectr(HyperCube* cube, Attributes* attr, QWidget *parent)
    : QWidget(parent)
    , m_ui(new Ui::CreateSpectr)
    , m_cube(cube)
    , m_attributes(attr)
{
    m_ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
    QObject::connect(m_ui->pushButton_save, SIGNAL(clicked()), this, SLOT(SaveSpectr()));
    // если файл extern. то можно заполнить поля
    if (m_attributes->GetExternalSpectrFlag())
    {
        for (int i = 0; i < m_attributes->GetSpectrumDescription().size(); i++)
        {
            // через case нельзя, т.к. нужно сравнивать без учета регистра
            if (m_attributes->GetSpectrumDescription().at(i).title.compare("Название:", Qt::CaseInsensitive) == 0 ||
                m_attributes->GetSpectrumDescription().at(i).title.compare("Name:", Qt::CaseInsensitive) == 0    )
            {
                m_ui->lineEdit_name->setText(m_attributes->GetSpectrumDescription().at(i).description);
            } else if (m_attributes->GetSpectrumDescription().at(i).title.compare("Тип:", Qt::CaseInsensitive) == 0 ||
                       m_attributes->GetSpectrumDescription().at(i).title.compare("Type:", Qt::CaseInsensitive) == 0)
            {
                m_ui->lineEdit_type->setText(m_attributes->GetSpectrumDescription().at(i).description);
            } else if (m_attributes->GetSpectrumDescription().at(i).title.compare("Класс:", Qt::CaseInsensitive) == 0 ||
                       m_attributes->GetSpectrumDescription().at(i).title.compare("Class:", Qt::CaseInsensitive) == 0)
            {
                m_ui->lineEdit_class->setText(m_attributes->GetSpectrumDescription().at(i).description);
            } else if (m_attributes->GetSpectrumDescription().at(i).title.compare("Подкласс:", Qt::CaseInsensitive) == 0 ||
                       m_attributes->GetSpectrumDescription().at(i).title.compare("Subclass:", Qt::CaseInsensitive) == 0)
            {
                m_ui->lineEdit_subclass->setText(m_attributes->GetSpectrumDescription().at(i).description);
            } else if (m_attributes->GetSpectrumDescription().at(i).title.compare("Владелец:", Qt::CaseInsensitive) == 0 ||
                       m_attributes->GetSpectrumDescription().at(i).title.compare("Qwner:", Qt::CaseInsensitive) == 0)
            {
                m_ui->lineEdit_owner->setText(m_attributes->GetSpectrumDescription().at(i).description);
            } else if (m_attributes->GetSpectrumDescription().at(i).title.compare("Происхождение:", Qt::CaseInsensitive) == 0 ||
                       m_attributes->GetSpectrumDescription().at(i).title.compare("Origin:", Qt::CaseInsensitive) == 0)
            {
                m_ui->lineEdit_origin->setText(m_attributes->GetSpectrumDescription().at(i).description);
            } else if (m_attributes->GetSpectrumDescription().at(i).title.compare("Описание:", Qt::CaseInsensitive) == 0 ||
                       m_attributes->GetSpectrumDescription().at(i).title.compare("Description:", Qt::CaseInsensitive) == 0)
            {
                m_ui->lineEdit_description->setText(m_attributes->GetSpectrumDescription().at(i).description);
            } else if (m_attributes->GetSpectrumDescription().at(i).title.compare("Измеряемая величина:", Qt::CaseInsensitive) == 0 ||
                       m_attributes->GetSpectrumDescription().at(i).title.compare("Measurement:", Qt::CaseInsensitive) == 0)
            {
                m_ui->lineEdit_measurements->setText(m_attributes->GetSpectrumDescription().at(i).description);
            } else if (m_attributes->GetSpectrumDescription().at(i).title.compare("Первый столбец:", Qt::CaseInsensitive) == 0 ||
                       m_attributes->GetSpectrumDescription().at(i).title.compare("First column:", Qt::CaseInsensitive) == 0)
            {
                m_ui->lineEdit_firstColumn->setText(m_attributes->GetSpectrumDescription().at(i).description);
            } else if (m_attributes->GetSpectrumDescription().at(i).title.compare("Второй столбец:", Qt::CaseInsensitive) == 0 ||
                       m_attributes->GetSpectrumDescription().at(i).title.compare("Second column:", Qt::CaseInsensitive) == 0)
            {
                m_ui->lineEdit_secondColumn->setText(m_attributes->GetSpectrumDescription().at(i).description);
            } else if (m_attributes->GetSpectrumDescription().at(i).title.compare("Дополнительная информация:", Qt::CaseInsensitive) == 0 ||
                       m_attributes->GetSpectrumDescription().at(i).title.compare("Additional information:", Qt::CaseInsensitive) == 0)
            {
                m_ui->lineEdit_addInfo->setText(m_attributes->GetSpectrumDescription().at(i).description);
            }
        }
    }
}

CreateSpectr::~CreateSpectr()
{
    delete m_ui;
}

void CreateSpectr::SaveSpectr()
{
    // получили вектор данных для записи
    QVector<double> data; QList<double> listWaves;
    listWaves = m_attributes->GetXUnits().toList();
    data = m_attributes->GetYUnits();
    // проверяем, все ли поля заполнены (не нужно, можно оставлять пустыми).
    QString filePathBase = "";
    if (!m_ui->lineEdit_name->text().isEmpty())
    {
        filePathBase.append(m_ui->lineEdit_name->text()).append(".");
    }

    if (!m_ui->lineEdit_origin->text().isEmpty())
    {
        filePathBase.append(m_ui->lineEdit_origin->text()).append(".");
    }
    if (!m_ui->lineEdit_owner->text().isEmpty())
    {
        filePathBase.append(m_ui->lineEdit_owner->text()).append(".");
    }
    if (filePathBase.compare("") != 0)
    {
        filePathBase.append("txt");
    }
    filePathBase.toLower();
    QString filePath = QFileDialog::getSaveFileName(this, tr("Сохранить спектр"), filePathBase, tr("Текстовый файл (*.txt)"));
    QFile fileOut(filePath);
    QString err;
    try
    {
        if (filePath.isEmpty())
        {
            throw GenericExc(tr("не задан файл для записи выходных данных"));
        }
        if (data.size() < 1)
        {
            throw GenericExc(tr("ошибка данных"));
        }
        if (fileOut.size() != 0) {
            int n = QMessageBox::warning(this, "Предупреждение", "Выходной файл будет очищен" "\n Продолжить", "Да", "Отмена", QString(), 0, 1);
            // Если нажата Отмена, то выход из функции
            if (n) {
                return;
            }
        }
        if (!fileOut.open(QIODevice::WriteOnly))
        {
            throw GenericExc(tr("Ошибка открытия файла для записи"));
        } else
        {
            // записываем шапку
            QTextStream out(&fileOut);
            out << m_ui->label_name->text()        << ": " << m_ui->lineEdit_name->text()        << "\n";
            out << m_ui->label_type->text()        << ": " << m_ui->lineEdit_type->text()        << "\n";
            out << m_ui->label_class->text()       << ": " << m_ui->lineEdit_class->text()       << "\n";
            out << m_ui->label_subclass->text()    << ": " << m_ui->lineEdit_subclass->text()    << "\n";
            out << m_ui->label_owner->text()       << ": " << m_ui->lineEdit_owner->text()       << "\n";
            out << m_ui->label_origin->text()      << ": " << m_ui->lineEdit_origin->text()      << "\n";
            out << m_ui->label_description->text() << ": " << m_ui->lineEdit_description->text() << "\n";
            out << "\n";
            out << "\n";
            out << m_ui->label_measurements->text() << ": " << m_ui->lineEdit_measurements->text() << "\n";
            out << m_ui->label_firstColumn->text()  << ": " << m_ui->lineEdit_firstColumn->text()  << "\n";
            out << m_ui->label_secondColumn->text() << ": " << m_ui->lineEdit_secondColumn->text() << "\n";
            out << m_ui->label_addInfo->text()      << ": " << m_ui->lineEdit_addInfo->text()      << "\n";
            out << "\n";
            out << "\n";
            // ищем максимальный размер
            int maxSize = 0;
            for (int i = 0; i < listWaves.size(); i++)
            {
                QString wave = QString::number(listWaves.at(i));
                if (wave.size() > maxSize)
                {
                    maxSize = wave.size();
                }
            }
            for (int i = 0; i < listWaves.size(); i++)
            {
                QString wave = QString::number(listWaves.at(i));
                if (wave.size() != maxSize) {
                    for (int i = wave.size(); i < maxSize; i++)
                    {
                        wave.append(" ");
                    }
                }
                out << wave << "     " << data.at(i) << "\n";
            }
        }
        fileOut.close();
        QMessageBox::information(this, "Сохранение спектра", "Данные успешно сохранены!");
    } catch (const GenericExc& exc)
    {
        err = exc.GetWhat();
    } catch (...)
    {
        err = tr("Неизвестная ошибка");
    }
    if (!err.isEmpty())
    {
        QMessageBox::critical(this, tr("Ошибка"), tr("Ошибка записи в файл данных: %0").arg(err));
    }

}