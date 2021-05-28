#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QDialog>
#include <QTcpServer>
#include <QtNetwork>

QT_BEGIN_NAMESPACE
namespace Ui { class tcpserver; }
QT_END_NAMESPACE

class tcpserver : public QDialog
{
    Q_OBJECT

public:
    tcpserver(QWidget *parent = nullptr);
    ~tcpserver();

private:
    Ui::tcpserver *ui;
    //Socket Server
    QTcpServer *qTcpServer = nullptr;
    //Banco de mensajes (array)
    QVector<QString> randomMessages;

    //functions
    void initServer();
private slots:
        void sendRandomMessage();
};
#endif // TCPSERVER_H
