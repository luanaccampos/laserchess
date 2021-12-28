#ifndef JANELA_H
#define JANELA_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QPainter>
#include <QPaintEvent>
#include <QTimer>
#include <QDebug>
#include <QApplication>
#include "tabuleiro.h"

class janela : public QMainWindow
{
    Q_OBJECT
public:
    explicit janela(QWidget *parent = nullptr);
signals:
public slots:
    void paintEvent(QPaintEvent *event);
    void abre(string jogo);
    void classic();
    void dynasty();
    void cairo();
};

#endif // JANELA_H
