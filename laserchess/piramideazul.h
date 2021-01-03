#ifndef PIRAMIDEAZUL_H
#define PIRAMIDEAZUL_H

#include "peca.h"

class PiramideAzul : public Peca
{
public:
    PiramideAzul(int X, int Y, int GRAU, QWidget *parent = nullptr) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
    string tipo();
    vector<int> hit(int k);
};

#endif // PIRAMIDEAZUL_H
