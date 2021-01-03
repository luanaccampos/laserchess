#ifndef FARAOVERMELHO_H
#define FARAOVERMELHO_H

#include "peca.h"

class FaraoVermelho : public Peca
{
public:
    FaraoVermelho(int X, int Y, int GRAU, QWidget *parent) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
    string tipo();
    vector<int> hit(int k);
};

#endif // FARAOVERMELHO_H
