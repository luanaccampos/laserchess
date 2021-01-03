#ifndef SCRAB_H
#define SCRAB_H

#include "peca.h"

class Scrab : public Peca
{
public:
    Scrab(int X, int Y, int GRAU, QWidget *parent) : Peca(X, Y, GRAU, parent) {};
    void draw(QPainter *p);
};

#endif // SCRAB_H
