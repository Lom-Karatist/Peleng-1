/********************************************************************************
** Form generated from reading UI file 'FileProjectWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEPROJECTWINDOW_H
#define UI_FILEPROJECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileProjectWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_CreateFileProject;
    QPushButton *pushButton_spectralLibs;
    QLineEdit *lineEdit_tempDir;
    QLabel *label_tempDir;
    QLineEdit *lineEdit_spectralLibs;
    QPushButton *pushButton_openTempDir;
    QLabel *label_SpectralLibs;
    QLineEdit *lineEdit_fileHEader;
    QPushButton *pushButton_openFileHeader;
    QLabel *label_fileHeader;
    QLabel *label_empty;
    QLabel *label;
    QLineEdit *lineEdit_fileName;
    QLabel *label_2;

    void setupUi(QWidget *FileProjectWindow)
    {
        if (FileProjectWindow->objectName().isEmpty())
            FileProjectWindow->setObjectName(QStringLiteral("FileProjectWindow"));
        FileProjectWindow->resize(670, 352);
        horizontalLayout = new QHBoxLayout(FileProjectWindow);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 2, 1, 1);

        pushButton_CreateFileProject = new QPushButton(FileProjectWindow);
        pushButton_CreateFileProject->setObjectName(QStringLiteral("pushButton_CreateFileProject"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/tab/icons/create.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_CreateFileProject->setIcon(icon);
        pushButton_CreateFileProject->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_CreateFileProject, 5, 2, 1, 1);

        pushButton_spectralLibs = new QPushButton(FileProjectWindow);
        pushButton_spectralLibs->setObjectName(QStringLiteral("pushButton_spectralLibs"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/tab/icons/folder_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_spectralLibs->setIcon(icon1);
        pushButton_spectralLibs->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_spectralLibs, 3, 2, 1, 1);

        lineEdit_tempDir = new QLineEdit(FileProjectWindow);
        lineEdit_tempDir->setObjectName(QStringLiteral("lineEdit_tempDir"));
        lineEdit_tempDir->setReadOnly(true);

        gridLayout->addWidget(lineEdit_tempDir, 2, 1, 1, 1);

        label_tempDir = new QLabel(FileProjectWindow);
        label_tempDir->setObjectName(QStringLiteral("label_tempDir"));

        gridLayout->addWidget(label_tempDir, 2, 0, 1, 1);

        lineEdit_spectralLibs = new QLineEdit(FileProjectWindow);
        lineEdit_spectralLibs->setObjectName(QStringLiteral("lineEdit_spectralLibs"));
        lineEdit_spectralLibs->setReadOnly(true);

        gridLayout->addWidget(lineEdit_spectralLibs, 3, 1, 1, 1);

        pushButton_openTempDir = new QPushButton(FileProjectWindow);
        pushButton_openTempDir->setObjectName(QStringLiteral("pushButton_openTempDir"));
        pushButton_openTempDir->setIcon(icon1);
        pushButton_openTempDir->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_openTempDir, 2, 2, 1, 1);

        label_SpectralLibs = new QLabel(FileProjectWindow);
        label_SpectralLibs->setObjectName(QStringLiteral("label_SpectralLibs"));

        gridLayout->addWidget(label_SpectralLibs, 3, 0, 1, 1);

        lineEdit_fileHEader = new QLineEdit(FileProjectWindow);
        lineEdit_fileHEader->setObjectName(QStringLiteral("lineEdit_fileHEader"));
        lineEdit_fileHEader->setReadOnly(true);

        gridLayout->addWidget(lineEdit_fileHEader, 1, 1, 1, 1);

        pushButton_openFileHeader = new QPushButton(FileProjectWindow);
        pushButton_openFileHeader->setObjectName(QStringLiteral("pushButton_openFileHeader"));
        pushButton_openFileHeader->setIcon(icon1);
        pushButton_openFileHeader->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_openFileHeader, 1, 2, 1, 1);

        label_fileHeader = new QLabel(FileProjectWindow);
        label_fileHeader->setObjectName(QStringLiteral("label_fileHeader"));

        gridLayout->addWidget(label_fileHeader, 1, 0, 1, 1);

        label_empty = new QLabel(FileProjectWindow);
        label_empty->setObjectName(QStringLiteral("label_empty"));

        gridLayout->addWidget(label_empty, 5, 0, 1, 1);

        label = new QLabel(FileProjectWindow);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_fileName = new QLineEdit(FileProjectWindow);
        lineEdit_fileName->setObjectName(QStringLiteral("lineEdit_fileName"));

        gridLayout->addWidget(lineEdit_fileName, 0, 1, 1, 1);

        label_2 = new QLabel(FileProjectWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(FileProjectWindow);

        QMetaObject::connectSlotsByName(FileProjectWindow);
    } // setupUi

    void retranslateUi(QWidget *FileProjectWindow)
    {
        FileProjectWindow->setWindowTitle(QApplication::translate("FileProjectWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \321\204\320\260\320\271\320\273\320\260-\320\277\321\200\320\276\320\265\320\272\321\202\320\260", 0));
#ifndef QT_NO_WHATSTHIS
        pushButton_CreateFileProject->setWhatsThis(QApplication::translate("FileProjectWindow", "<html><head/><body><p>\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_CreateFileProject->setText(QString());
#ifndef QT_NO_WHATSTHIS
        pushButton_spectralLibs->setWhatsThis(QApplication::translate("FileProjectWindow", "<html><head/><body><p>\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\272\320\260\321\202\320\260\320\273\320\276\320\263</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_spectralLibs->setText(QString());
        label_tempDir->setText(QApplication::translate("FileProjectWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\240\320\260\320\261\320\276\321\207\320\260\321\217 \320\264\320\270\321\200\320\265\320\272\321\202\320\276\321\200\320\270\321\217</span></p></body></html>", 0));
#ifndef QT_NO_WHATSTHIS
        pushButton_openTempDir->setWhatsThis(QApplication::translate("FileProjectWindow", "<html><head/><body><p>\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\272\320\260\321\202\320\260\320\273\320\276\320\263</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_openTempDir->setText(QString());
        label_SpectralLibs->setText(QApplication::translate("FileProjectWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\232\320\260\321\202\320\260\320\273\320\276\320\263 \321\201\320\277\320\265\320\272\321\202\321\200\320\260\320\273\321\214\320\275\321\213\321\205</span></p><p><span style=\" font-size:10pt;\">\320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272</span></p></body></html>", 0));
#ifndef QT_NO_WHATSTHIS
        pushButton_openFileHeader->setWhatsThis(QApplication::translate("FileProjectWindow", "<html><head/><body><p>\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273-\320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272</p><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        pushButton_openFileHeader->setText(QString());
        label_fileHeader->setText(QApplication::translate("FileProjectWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\237\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203-\320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\272\321\203</span></p></body></html>", 0));
        label_empty->setText(QApplication::translate("FileProjectWindow", "<html><head/><body><p><br/></p><p><br/></p></body></html>", 0));
        label->setText(QApplication::translate("FileProjectWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\320\265\320\272\321\202\320\260</span></p></body></html>", 0));
        lineEdit_fileName->setText(QApplication::translate("FileProjectWindow", "new project", 0));
        label_2->setText(QApplication::translate("FileProjectWindow", "<html><head/><body><p><br/></p><p><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class FileProjectWindow: public Ui_FileProjectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEPROJECTWINDOW_H
