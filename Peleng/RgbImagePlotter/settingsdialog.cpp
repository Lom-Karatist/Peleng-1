#include "settingsdialog.h"
#include "ui_settingsdialog.h"

#include <QFileDialog>

SettingsDialog::SettingsDialog(HyperCube *cube, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    TypeOfMethod=0;
    /*ui->StdProfileComboBox->setCurrentIndex(0);
    ui->Ch1ComboBox->setCurrentIndex(0);
    ui->Ch2ComboBox->setCurrentIndex(1);
    ui->Ch3ComboBox->setCurrentIndex(2);*/

    FileName= "";
    TypeOfStdProfile =0;
    rCh=0;
    gCh=0;
    bCh=0;

    /*TypeOfStdProfile = ui->StdProfileComboBox->currentIndex();
    rCh = ui->Ch1ComboBox->currentIndex();
    gCh = ui->Ch1ComboBox->currentIndex();
    bCh = ui->Ch1ComboBox->currentIndex();*/

    ui->setupUi(this);
    QList<double> list = cube->GetListOfChannels();
    for (int i = 0; i < list.size(); i++) {
        ui->Ch1ComboBox->addItem(QString("%1 - %2").arg(i+1).arg(list[i]));
        ui->Ch2ComboBox->addItem(QString("%1 - %2").arg(i+1).arg(list[i]));
        ui->Ch3ComboBox->addItem(QString("%1 - %2").arg(i+1).arg(list[i]));
    }
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::on_radioButton_clicked(bool checked)
{

}

void SettingsDialog::on_stdRadioBox_clicked(bool checked)
{
    if (checked) ui->stackedWidget->setCurrentIndex(0);
    TypeOfMethod=0;
}

void SettingsDialog::on_rndRadioBox_pressed()
{

}

void SettingsDialog::on_rndRadioBox_clicked(bool checked)
{
    if (checked) ui->stackedWidget->setCurrentIndex(1);
    TypeOfMethod=1;
}

void SettingsDialog::on_chnRadioBox_clicked(bool checked)
{
    if (checked) ui->stackedWidget->setCurrentIndex(2);
    TypeOfMethod=2;
}

void SettingsDialog::on_findFileBtn_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Открыть файл"),
                                                    "",
                                                    tr("csv файл с профилями (*.txt, *.csv, *.dat)"));
    ui->FileEdit->setText(fileName);
    FileName = fileName;
}

void SettingsDialog::on_StdProfileComboBox_currentIndexChanged(int index)
{
    TypeOfStdProfile = index;
}

void SettingsDialog::on_Ch1ComboBox_currentIndexChanged(int index)
{
    rCh = index;
}

void SettingsDialog::on_Ch2ComboBox_activated(int index)
{
    gCh = index;
}

void SettingsDialog::on_Ch3ComboBox_activated(int index)
{
    bCh = index;
}