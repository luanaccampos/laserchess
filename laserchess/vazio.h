#ifndef VAZIO_H
#define VAZIO_H

#include "peca.h"

class Vazio : public Peca
{
public:
    Vazio(int X, int Y, QWidget *parent) : Peca(X, Y, 0, parent) {};
    void draw(QPainter *event);
    vector<int> hit(int k);
    string tipo();
};

#endif // VAZIO_H
