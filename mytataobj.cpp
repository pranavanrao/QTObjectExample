#include "mytataobj.h"

#include <QDebug>

MyTataObj::MyTataObj(QObject *parent)
    : QObject{parent}
{}

MyTataObj::~MyTataObj()
{
    qDebug() << Q_FUNC_INFO << Qt::endl;
}
