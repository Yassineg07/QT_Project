/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *ventilo_OFF;
    QPushButton *ventilo_On;
    QLabel *label_4;
    QPushButton *btnLampe1Off;
    QLabel *label_3;
    QPushButton *btnLampe1ON;
    QPushButton *btnLampe2Decrease;
    QPushButton *btnLampe2increase;
    QLabel *label;
    QLabel *label_ventilo;
    QLabel *label_lampe;
    QLabel *label_5;
    QLabel *label_6;
    QSlider *ventilo_slider;
    QLabel *lab;
    QLabel *labelPourcentage;
    QLabel *lab_2;
    QLabel *pourcentage_lumiere;
    QSlider *lampe_slider;
    QLabel *label_2;
    QLabel *label_wifi;
    QPushButton *btn_temperatureEnable;
    QLabel *label_7;
    QLabel *label_temperature;
    QPushButton *btn_temperatureDisable;
    QLabel *label_8;
    QLabel *label_obstacle;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ventilo_OFF = new QPushButton(centralwidget);
        ventilo_OFF->setObjectName("ventilo_OFF");
        ventilo_OFF->setGeometry(QRect(220, 100, 61, 41));
        ventilo_On = new QPushButton(centralwidget);
        ventilo_On->setObjectName("ventilo_On");
        ventilo_On->setGeometry(QRect(150, 100, 61, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 110, 71, 31));
        btnLampe1Off = new QPushButton(centralwidget);
        btnLampe1Off->setObjectName("btnLampe1Off");
        btnLampe1Off->setGeometry(QRect(220, 210, 61, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 270, 63, 20));
        btnLampe1ON = new QPushButton(centralwidget);
        btnLampe1ON->setObjectName("btnLampe1ON");
        btnLampe1ON->setGeometry(QRect(150, 210, 61, 41));
        btnLampe2Decrease = new QPushButton(centralwidget);
        btnLampe2Decrease->setObjectName("btnLampe2Decrease");
        btnLampe2Decrease->setGeometry(QRect(590, 240, 61, 31));
        btnLampe2increase = new QPushButton(centralwidget);
        btnLampe2increase->setObjectName("btnLampe2increase");
        btnLampe2increase->setGeometry(QRect(590, 290, 61, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 220, 51, 31));
        label_ventilo = new QLabel(centralwidget);
        label_ventilo->setObjectName("label_ventilo");
        label_ventilo->setGeometry(QRect(140, 160, 141, 31));
        label_lampe = new QLabel(centralwidget);
        label_lampe->setObjectName("label_lampe");
        label_lampe->setGeometry(QRect(150, 270, 121, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 260, 31, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 160, 31, 31));
        ventilo_slider = new QSlider(centralwidget);
        ventilo_slider->setObjectName("ventilo_slider");
        ventilo_slider->setGeometry(QRect(550, 80, 18, 101));
        ventilo_slider->setOrientation(Qt::Orientation::Vertical);
        lab = new QLabel(centralwidget);
        lab->setObjectName("lab");
        lab->setGeometry(QRect(540, 190, 51, 31));
        labelPourcentage = new QLabel(centralwidget);
        labelPourcentage->setObjectName("labelPourcentage");
        labelPourcentage->setGeometry(QRect(550, 50, 63, 20));
        lab_2 = new QLabel(centralwidget);
        lab_2->setObjectName("lab_2");
        lab_2->setGeometry(QRect(600, 190, 91, 31));
        pourcentage_lumiere = new QLabel(centralwidget);
        pourcentage_lumiere->setObjectName("pourcentage_lumiere");
        pourcentage_lumiere->setGeometry(QRect(620, 50, 63, 20));
        lampe_slider = new QSlider(centralwidget);
        lampe_slider->setObjectName("lampe_slider");
        lampe_slider->setGeometry(QRect(610, 80, 31, 101));
        lampe_slider->setOrientation(Qt::Orientation::Vertical);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 41, 21));
        label_wifi = new QLabel(centralwidget);
        label_wifi->setObjectName("label_wifi");
        label_wifi->setGeometry(QRect(60, 40, 111, 21));
        btn_temperatureEnable = new QPushButton(centralwidget);
        btn_temperatureEnable->setObjectName("btn_temperatureEnable");
        btn_temperatureEnable->setGeometry(QRect(340, 70, 71, 29));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(350, 40, 91, 21));
        label_temperature = new QLabel(centralwidget);
        label_temperature->setObjectName("label_temperature");
        label_temperature->setGeometry(QRect(350, 110, 71, 21));
        btn_temperatureDisable = new QPushButton(centralwidget);
        btn_temperatureDisable->setObjectName("btn_temperatureDisable");
        btn_temperatureDisable->setGeometry(QRect(420, 70, 71, 29));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(320, 210, 141, 20));
        label_obstacle = new QLabel(centralwidget);
        label_obstacle->setObjectName("label_obstacle");
        label_obstacle->setGeometry(QRect(360, 260, 141, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ventilo_OFF->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        ventilo_On->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ventilation", nullptr));
        btnLampe1Off->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Lampe 2", nullptr));
        btnLampe1ON->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        btnLampe2Decrease->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnLampe2increase->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "lampe", nullptr));
        label_ventilo->setText(QCoreApplication::translate("MainWindow", "ventilateur d\303\251sactiv\303\251", nullptr));
        label_lampe->setText(QCoreApplication::translate("MainWindow", "lampe d\303\251sactiv\303\251", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Etat", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Etat", nullptr));
        lab->setText(QCoreApplication::translate("MainWindow", "ventilo", nullptr));
        labelPourcentage->setText(QCoreApplication::translate("MainWindow", "0 %", nullptr));
        lab_2->setText(QCoreApplication::translate("MainWindow", "lampe_range", nullptr));
        pourcentage_lumiere->setText(QCoreApplication::translate("MainWindow", "0 %", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "wifi :", nullptr));
        label_wifi->setText(QCoreApplication::translate("MainWindow", " d\303\251connect\303\251", nullptr));
        btn_temperatureEnable->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "temp\303\251rature", nullptr));
        label_temperature->setText(QCoreApplication::translate("MainWindow", "Mesure", nullptr));
        btn_temperatureDisable->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "detection obstacle  :", nullptr));
        label_obstacle->setText(QCoreApplication::translate("MainWindow", "motion detection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
