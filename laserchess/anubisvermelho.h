#ifndef ANUBISVERMELHO_H
#define ANUBISVERMELHO_H

#include "peca.h"

class AnubisVermelho : public Peca
{
public:
    AnubisVermelho(int X, int Y, int GRAU, QWidget *parent) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
    string tipo();
    vector<int> hit(int k);
};

#endif // ANUBISVERMELHO_H
