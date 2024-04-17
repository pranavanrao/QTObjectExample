#ifndef MYTATAOBJ_H
#define MYTATAOBJ_H

#include <QObject>

class MyTataObj : public QObject
{
    Q_OBJECT
public:
    explicit MyTataObj(QObject *parent = nullptr);
    ~MyTataObj();

signals:
};

#endif // MYTATAOBJ_H
