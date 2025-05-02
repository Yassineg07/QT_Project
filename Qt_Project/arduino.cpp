#include "arduino.h"
#include <QDebug>

Arduino::Arduino() : data(""), serial(new QSerialPort)
{}

QString Arduino::getarduino_port_name()
{
    return arduino_port_name;
}

QSerialPort* Arduino::getserial()
{
    return serial;
}

Arduino::~Arduino()
{
    close_arduino();
    delete serial;
}

int Arduino::close_arduino()
{
    if (serial->isOpen()) {
        serial->close();
        return 0;
    }
    return 1;
}

QByteArray Arduino::read_from_arduino()
{
    if (serial->isReadable()) {
        data.append(serial->readAll());
    }
    return data;
}

void Arduino::write_to_arduino(QByteArray d)
{
    if (serial->isWritable()) {
        serial->write(d);
    } else {
        qDebug() << "Couldn't write to serial!";
    }
}

int Arduino::connect_arduino()
{
    serial->setPortName(arduino_port_name);
    if (serial->open(QSerialPort::ReadWrite)) {
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        return 0;
    } else {
        qDebug() << "Failed to open port" << arduino_port_name;
        return 1;
    }
}
