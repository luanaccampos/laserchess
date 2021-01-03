#ifndef SPHINXVERMELHA_H
#define SPHINXVERMELHA_H

#include "peca.h"

class SphinxVermelha : public Peca
{
public:
    SphinxVermelha(int X, int Y, int GRAU, QWidget *parent) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
    string tipo();
    vector<int> hit(int k);
    virtual void rotate(int x);

};

#endif // SPHINXVERMELHA_H
