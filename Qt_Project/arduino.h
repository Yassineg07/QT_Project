#ifndef ARDUINO_H
#define ARDUINO_H

#include <QByteArray>
#include <QSerialPort>

class Arduino
{
public:
    Arduino();
    ~Arduino();
    int connect_arduino();
    int close_arduino();
    void write_to_arduino(QByteArray);
    QByteArray read_from_arduino();
    QSerialPort* getserial();
    QString getarduino_port_name();

private:
    QByteArray data;
    QString arduino_port_name = "COM5";
    QSerialPort *serial;
};
#endif // ARDUINO_H

