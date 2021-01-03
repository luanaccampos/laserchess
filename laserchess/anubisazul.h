#ifndef ANUBISAZUL_H
#define ANUBISAZUL_H

#include "peca.h"

class AnubisAzul : public Peca
{
public:
    AnubisAzul(int X, int Y, int GRAU, QWidget *parent) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
    string tipo();
    vector<int> hit(int k);
};

#endif // ANUBISAZUL_H
