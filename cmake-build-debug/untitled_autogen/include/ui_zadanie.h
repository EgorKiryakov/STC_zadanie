/********************************************************************************
** Form generated from reading UI file 'zadanie.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZADANIE_H
#define UI_ZADANIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *cko;
    QLCDNumber *disp;
    QLCDNumber *mat;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *start;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(859, 647);
        MainWindow->setToolTipDuration(1);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread: pad, x1:1, y1:1, x2:0, y2:0, stop:0 rgba(81, 0 135, 255), stop:0.005 rgba(51, 61, 132, 255), stop:1 rgba(155, 79, 165, 255));\n"
"font: 16pt \"Segoe UI Symbol\";\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(20, 110, 821, 421));
        graphicsView->setToolTipDuration(1);
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255);\n"
"border: 10px solid rgba(255, 255, 255, 60);\n"
"border-radius: 10px;"));
        QBrush brush(QColor(255, 255, 255, 252));
        brush.setStyle(Qt::NoBrush);
        graphicsView->setBackgroundBrush(brush);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 550, 801, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 30);\n"
"border: 1px solid rgba(255, 255, 255, 40);\n"
"border-radius: 7px;\n"
""));

        horizontalLayout_2->addWidget(label_6);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 30);\n"
"border: 1px solid rgba(255, 255, 255, 40);\n"
"border-radius: 7px;\n"
""));

        horizontalLayout_2->addWidget(label_8);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 30);\n"
"border: 1px solid rgba(255, 255, 255, 40);\n"
"border-radius: 7px;\n"
""));

        horizontalLayout_2->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        cko = new QLCDNumber(layoutWidget);
        cko->setObjectName("cko");
        cko->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);\n"
"border: 1px solid rgba(255, 255, 255, 40);\n"
"border-radius: 7px;\n"
""));

        horizontalLayout->addWidget(cko);

        disp = new QLCDNumber(layoutWidget);
        disp->setObjectName("disp");
        disp->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);\n"
"border: 1px solid rgba(255, 255, 255, 40);\n"
"border-radius: 7px;\n"
""));

        horizontalLayout->addWidget(disp);

        mat = new QLCDNumber(layoutWidget);
        mat->setObjectName("mat");
        mat->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);\n"
"border: 1px solid rgba(255, 255, 255, 40);\n"
"border-radius: 7px;\n"
""));

        horizontalLayout->addWidget(mat);


        verticalLayout->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 30, 811, 82));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 30);\n"
"border: 1px solid rgba(255, 255, 255, 40);\n"
"border-radius: 7px;"));

        verticalLayout_2->addWidget(label);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 30);\n"
"border: 1px solid rgba(255, 255, 255, 40);\n"
"border-radius: 7px;"));

        verticalLayout_2->addWidget(comboBox);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);

        start = new QPushButton(layoutWidget1);
        start->setObjectName("start");

        verticalLayout_3->addWidget(start);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 30);\n"
"border: 1px solid rgba(255, 255, 255, 40);\n"
"border-radius: 7px;"));

        verticalLayout_4->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 200);\n"
"border: 1px solid rgba(255, 255, 255, 40);\n"
"border-radius: 7px;\n"
""));

        verticalLayout_4->addWidget(lineEdit);


        horizontalLayout_3->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Kiryakov/Tymchenko", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "                  SKO", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "               Variance", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "            Mat. waiting", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Type of values", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Re", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Im", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Abs", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Phase", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "Select a file", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\220\320\264\321\200\320\265\321\201 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("MainWindow", "                    Address of the selected file:", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZADANIE_H
