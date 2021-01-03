#include "piramidevermelha.h"

void PiramideVermelha::draw(QPainter *p)
{
    QPixmap d(":/imagens/piramideVermelha");
    QTransform t;
    t.rotate(grau);
    d = d.transformed(t);
    p->drawPixmap(QRect(x, y, 100, 100), d);
}

string PiramideVermelha::tipo()
{
    return "PV";
}

vector<int> PiramideVermelha::hit(int k)
{
    if(grau == 0)
    {
        if(k == 1 or k == 2) // atingido
            return {-1, x+50, y+50};

        if(k == 0)
            return {2, x+50, y+50};
        else
            return {1, x+50, y+50};
    }
    if(grau == 90)
    {
        if(k == 0 or k == 2)
            return {-1, x+50, y+50};

        if(k == 1)
            return {2, x+50, y+50};
        else
            return {0, x+ 50, y+50};
    }
    if(grau == 180)
    {
        if(k == 0 or k == 3)
            return {-1, x+50, y+50};

        if(k == 1)
            return {3, x+50, y+50};
        else
            return {0, x+50, y+50};
    }
    else
    {
        if(k == 1 or k == 3)
            return {-1, x+50, y+50};

        if(k == 2)
            return {1, x+50, y+50};
        else
            return {3, x+50, y+50};
    }
}


