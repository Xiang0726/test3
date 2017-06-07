#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QMouseEvent>
#include "Minion1.h"
#include <QKeyEvent>
#include "Minion2.h"
#include <Enemy1.h>
#include<QPushButton>

class Game: public QGraphicsView{
    Q_OBJECT
public:
    // member functions
    Game();
    void mousePressEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *eventnumber);
    int id;
    void final_win();
    void final_lose();
    // member attributes
    QGraphicsScene * scene;
    QGraphicsScene * scenewin;
    QGraphicsScene * scenelose;
    QGraphicsScene * test1;

    QPushButton * button;
    static int a;
    static int b;
public slots:
    void test();

};



#endif // GAME_H
