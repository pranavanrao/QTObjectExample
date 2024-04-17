#include "mywidget.h"
#include "ui_mywidget.h"

#include <QDebug>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

void MyWidget::sum(QObject *obj) {
    qDebug() << Q_FUNC_INFO << obj->objectName();
    qDebug() << obj->property("btn1").toInt();
    qDebug() << obj->property("btn2").toInt();
    qDebug() << obj->property("radio").toInt();
    qDebug() << obj->property("checkBox").toInt();
    const QMetaObject *metaObj = obj->metaObject();
    qDebug() << "Class Name = " << metaObj->className() << Qt::endl;
}

MyWidget::~MyWidget()
{
    delete ui;
}
