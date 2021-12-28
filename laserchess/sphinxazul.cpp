#include "sphinxazul.h"

void SphinxAzul::draw(QPainter *p)
{
    QPixmap d(":/imagens/sphinxAzul");
    QTransform t;
    t.rotate(grau);
    d = d.transformed(t);
    p->drawPixmap(QRect(x, y, 100, 100), d);
}

string SphinxAzul::tipo()
{
    return "sA";
}

void SphinxAzul::rotate(int x)
{
    if(grau == 180)
    {
        if(x == Qt::Key_Left)
            grau += 270;
        else
            throw 1;
    }
    else
    {
        if(x == Qt::Key_Right)
            grau += 90;
        else
            throw 1;
    }

    grau = grau % 360;
}

vector<int> SphinxAzul::hit(int k)
{
    if(k == -1)
    {
        if(grau == 180)
            return {1, x+50, y};
        else
            return {3, x, y+50};
    }
    else
        return {5, x+50, y+50};
}






