#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QMainWindow"
#include "arduino.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

  //  void init_wifi();



    void detectionObstacle();
    void TempertaureEnable_Measure();
    void TempertaureStop_Measure();
    void Lampe1_OnClicked();
    void Lampe1_OffClicked();
    void ventilo_Onclicked();
    void ventilo_OFFclicked();
    void Lampe2_IncreaseClicked();
    void Lampe2_DecreaseClicked();

 void lampe_slider_value (int val);
 void ventilo_slider_value(int value);

private:
    Ui::MainWindow *ui;
    Arduino *arduino;
};
#endif // MAINWINDOW_H

