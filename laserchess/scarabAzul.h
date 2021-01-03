#ifndef SCARABAZUL_H
#define SCARABAZUL_H

#include "peca.h"

class ScarabAzul : public Peca
{
public:
    ScarabAzul(int X, int Y, int GRAU, QWidget *parent) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
    string tipo();
    vector<int> hit(int k);
};

#endif // SCARABAZUL_H
