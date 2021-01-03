#ifndef FARAOAZUL_H
#define FARAOAZUL_H

#include "peca.h"

class FaraoAzul : public Peca
{
public:
    FaraoAzul(int X, int Y, int GRAU, QWidget *parent) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
    string tipo();
    vector<int> hit(int k);

};

#endif // FARAOAZUL_H
