#include "mytatawidget.h"
#include <QDebug>

MyTataWidget::MyTataWidget(QWidget *parent)
    : QWidget{parent}
{}

MyTataWidget::~MyTataWidget()
{
    qDebug() << Q_FUNC_INFO << Qt::endl;
}
