#ifndef SCARABVERMELHO_H
#define SCARABVERMELHO_H

#include "peca.h"

class ScarabVermelho : public Peca
{
public:
    ScarabVermelho(int X, int Y, int GRAU, QWidget *parent) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
    string tipo();
    vector<int> hit(int k);
};

#endif // SCARABVERMELHO_H
