#ifndef PIRAMIDEVERMELHA_H
#define PIRAMIDEVERMELHA_H

#include "peca.h"

class PiramideVermelha : public Peca
{
public:
    PiramideVermelha(int X, int Y, int GRAU, QWidget *parent) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
    string tipo();
    vector<int> hit(int k);
};

#endif // PIRAMIDEVERMELHA_H
