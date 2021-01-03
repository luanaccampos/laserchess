#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <QMainWindow>
#include <QLabel>
#include <QPainter>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QMessageBox>
#include <QPushButton>
#include <vector>
#include <string>
#include <QDesktopWidget>
#include <QApplication>
#include "peca.h"
#include "piramideazul.h"
#include "scarabAzul.h"
#include "sphinxazul.h"
#include "anubisazul.h"
#include "faraoazul.h"
#include "piramidevermelha.h"
#include "sphinxvermelha.h"
#include "faraovermelho.h"
#include "anubisvermelho.h"
#include "scarabvermelho.h"
#include "vazio.h"
#include "janelavitoria.h"

using namespace std;

class tabuleiro : public QMainWindow
{
    Q_OBJECT
    Peca *tab[8][10];
    bool S, turn;
    vector<pair<int, int>> fila, free;
    pair<int, int> H;
    vector<QLine> linhas;
    QLabel *label;
public:
    explicit tabuleiro(string jogo = "classic", QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
    vector<pair<int, int>> selecao(int a, int b);
    bool isvalid(int a, int b, string tipo);
    void classic();
    void dynasty();
    void cairo();
    void vez();
    void geraLinhas();
    void ganha();
signals:
public slots:
    void recebeClick(pair<int, int> s);
};

#endif // TABULEIRO_H
