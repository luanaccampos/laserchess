#ifndef SPHINXAZUL_H
#define SPHINXAZUL_H

#include "peca.h"

class SphinxAzul : public Peca
{
public:
    SphinxAzul(int X, int Y, int GRAU, QWidget *parent) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
    string tipo();
    vector<int> hit(int k);
    virtual void rotate(int x);
};

#endif // SPHINXAZUL_H
