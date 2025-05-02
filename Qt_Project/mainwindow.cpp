#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "arduino.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->ventilo_slider->setRange(10, 255); // Values from 10 to 255
    ui->ventilo_slider->setValue(10);
    ui->labelPourcentage->setText(QString::number(ui->ventilo_slider->value()) + "%");

    ui->lampe_slider->setRange(0, 255); // Values from 0 to 255
    ui->lampe_slider->setValue(0);
    ui->labelPourcentage->setText(QString::number(ui->lampe_slider->value()) + "%");

    arduino = new Arduino();
    arduino->connect_arduino();

    connect(ui->btnLampe1ON, &QPushButton::clicked, this, &MainWindow::Lampe1_OnClicked);
    connect(ui->ventilo_On, &QPushButton::clicked, this, &MainWindow::ventilo_Onclicked);
    connect(ui->ventilo_OFF, &QPushButton::clicked, this, &MainWindow::ventilo_OFFclicked);
    connect(ui->btnLampe1Off, &QPushButton::clicked, this, &MainWindow::Lampe1_OffClicked);
    connect(ui->btnLampe2increase, &QPushButton::clicked, this, &MainWindow::Lampe2_IncreaseClicked);
    connect(ui->btnLampe2Decrease, &QPushButton::clicked, this, &MainWindow::Lampe2_DecreaseClicked);

    connect(ui->ventilo_slider, &QSlider::valueChanged, this, &MainWindow::ventilo_slider_value);
    connect(ui->lampe_slider, &QSlider::valueChanged, this, &MainWindow::lampe_slider_value);

    connect(ui->btn_temperatureEnable, &QPushButton::clicked, this, &MainWindow::TempertaureEnable_Measure);
    connect(ui->btn_temperatureDisable, &QPushButton::clicked, this, &MainWindow::TempertaureStop_Measure);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete arduino;
}

void MainWindow::detectionObstacle()
{
    QByteArray data = arduino->read_from_arduino();
    if (!data.isEmpty() && data[0] == '8') {
        ui->label_obstacle->setText("Motion DETECTED");
    } else {
        ui->label_obstacle->setText("Motion NOT DETECTED");
    }
}

void MainWindow::ventilo_slider_value(int value)
{
    QByteArray data;
    data.append('G');
    data.append(static_cast<char>(value));
    arduino->write_to_arduino(data);

    ui->labelPourcentage->setText(QString::number((value * 100) / 255) + "%");
}

void MainWindow::lampe_slider_value(int val)
{
    QByteArray data;
    data.append('L');
    data.append(static_cast<char>(val));
    arduino->write_to_arduino(data);

    ui->pourcentage_lumiere->setText(QString::number((val * 100) / 255) + "%");
}

void MainWindow::TempertaureEnable_Measure()
{
    arduino->write_to_arduino("7");
    ui->label_temperature->setText("Mesure activé");
}

void MainWindow::TempertaureStop_Measure()
{
    arduino->write_to_arduino("6");
    ui->label_temperature->setText("Mesure désactivé");
}

void MainWindow::Lampe1_OnClicked()
{
    arduino->write_to_arduino("1");
    ui->label_lampe->setText("Lampe activé");
}

void MainWindow::Lampe1_OffClicked()
{
    arduino->write_to_arduino("0");
    ui->label_lampe->setText("Lampe désactivé");
}

void MainWindow::ventilo_Onclicked()
{
    arduino->write_to_arduino("3");
    ui->label_ventilo->setText("Ventilateur activé");
}

void MainWindow::ventilo_OFFclicked()
{
    arduino->write_to_arduino("2");
    ui->label_ventilo->setText("Ventilateur désactivé");
}

void MainWindow::Lampe2_IncreaseClicked()
{
    arduino->write_to_arduino("5");
}

void MainWindow::Lampe2_DecreaseClicked()
{
    arduino->write_to_arduino("4");
}
