#include "peca.h"

Peca::Peca(int X, int Y, int GRAU, QWidget *parent) : QWidget(parent)
{
    x = Y*110+55;
    y = X*110+65;
    grau = GRAU;
    setGeometry(x, y, 100, 100);
    setVisible(true);
    connect(this, SIGNAL(enviaClick(pair<int, int>)), parent, SLOT(recebeClick(pair<int, int>)));
}

void Peca::mousePressEvent(QMouseEvent *event)
{
    emit enviaClick({x, y});
}

void Peca::updatexy(int X, int Y)
{
    x = X;
    y = Y;
    setGeometry(x, y, 100, 100);
    setVisible(true);
}


void Peca::rotate(int x)
{
    if(x == Qt::Key_Left)
        grau += 270;
    else if(x == Qt::Key_Right)
        grau += 90;
    else
        throw 1;

    grau = grau % 360;
}






