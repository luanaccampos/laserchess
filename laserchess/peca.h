#ifndef PECA_H
#define PECA_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <vector>
#include <QDebug>

using namespace std;

class Peca : public QWidget
{
    Q_OBJECT
public:
    explicit Peca(int X, int Y, int GRAU, QWidget *parent = nullptr);
    virtual void draw(QPainter *p) = 0;
    virtual string tipo() = 0;
    virtual vector<int> hit(int k) = 0;
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void rotate(int x);
    void updatexy(int X, int Y);
protected:
    int x, y, grau;

signals:
    void enviaClick(pair<int, int>);

};

#endif // PECA_H
