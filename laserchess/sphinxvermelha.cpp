#include "sphinxvermelha.h"

void SphinxVermelha::draw(QPainter *p)
{
    QPixmap d(":/imagens/sphinxVermelho");
    QTransform t;
    t.rotate(grau);
    d = d.transformed(t);
    p->drawPixmap(QRect(x, y, 100, 100), d);
}

string SphinxVermelha::tipo()
{
    return "sV";
}

void SphinxVermelha::rotate(int x)
{
    if(grau == 0)
    {
        if(x == Qt::Key_Right)
            grau += 270;
        else
            throw 1;
    }
    else
    {
        if(x == Qt::Key_Left)
            grau += 90;
        else
            throw 1;
    }

    grau = grau % 360;
}

vector<int> SphinxVermelha::hit(int k)
{
    if(k == -1)
    {
        if(grau == 270)
            return {2, x+50, y+50};
        else
            return {0, x+50, y+50};
    }
    else
        return {5, x+50, y+50};
}
