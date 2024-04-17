#include "mywidget.h"
#include "mytataobj.h"
#include "mytatawidget.h"

#include <QApplication>
#include <QPushButton>
#include <QCheckBox>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget *w = new MyWidget;

    QHBoxLayout *layout = new QHBoxLayout;
    QPushButton *b1 = new QPushButton("Button1");
    QPushButton *b2 = new QPushButton("Button2");
    QRadioButton *rad = new QRadioButton("Radio");
    QCheckBox *check = new QCheckBox("Check");

    layout -> addWidget(b1);
    layout -> addWidget(b2);
    layout -> addWidget(rad);
    layout -> addWidget(check);

    w->setLayout(layout);

    MyTataWidget *tataWidget = new MyTataWidget(w);
    MyTataObj *tataObj = new MyTataObj(w);

    layout->setObjectName("Main Layout");
    b1->setObjectName("Button One");
    b2->setObjectName("Bitton Two");
    rad->setObjectName("Radio Button");
    check->setObjectName("Check Box");
    tataWidget->setObjectName("Tata Widget Class");
    tataObj->setObjectName("Tata Object Class");

    b1->setProperty("btn1",200);
    b2->setProperty("btn2",200);
    rad->setProperty("radio",200);
    check->setProperty("checkBox",200);

    w->sum(b1);
    w->sum(b2);
    w->sum(rad);
    w->sum(check);

    w->show();

    QList<QObject*> list = w->children();
    qDebug() << "Total Children Objects = " << list.length() << Qt::endl;
    for (int i = 0; i < list.length(); i++) {
        QObject *child = list.at(i);
        qDebug() << "Name = " << child->objectName();
    }
    qDebug() << Qt::endl;

    delete w;

    return a.exec();
}
