#include"Game.h"
#include"Minion1.h"
#include"Minion2.h"
#include <QGraphicsScene>
#include <QLabel>
#include <Enemy1.h>
#include <Bullet1.h>
#include"Tower.h"
#include"enemyTower1.h"
#include"Minion3.h"
#include"enemyTower2.h"
#include"enemyTower3.h"
#include<QLabel>

int Game::a = 0;
int Game::b = 0;
extern Game * game;

Game::Game(){

    // create scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setScene(scene);

    // create tower
    Tower * t = new Tower();
    t->setPos(0,50);
    enemyTower1 * t1 = new enemyTower1();
    t1->setPos(700,35);
    enemyTower2 * t2 = new enemyTower2();
    t2->setPos(850,275);
    enemyTower3 * t3 = new enemyTower3();
    t3->setPos(700,515);

    // add tower to scene
    scene->addItem(t);
    scene->addItem(t1);
    scene->addItem(t2);
    scene->addItem(t3);

    button = new QPushButton("close");
    scene->addWidget(button);
    connect(button, SIGNAL(clicked()), this, SLOT(test()));
}

    // chose minion type
void Game::keyPressEvent(QKeyEvent *eventnumber){
    if(eventnumber->key() == Qt::Key_1){
        id = 1;
    }
    else if(eventnumber ->key() == Qt::Key_2){
        id = 2;
    }
    else if(eventnumber ->key() == Qt::Key_3){
        id = 3;
    }
    else if(eventnumber ->key() == Qt::Key_4){
        id = 4;
    }
    else if(eventnumber ->key() == Qt::Key_5){
        id = 5;
    }
}

void Game::final_lose(){
   if(b==3){
    scene->clear();
    scenelose = new QGraphicsScene();
    scenelose->setSceneRect(0,0,800,600);
    setScene(scenelose);
    // display lose
    QLabel * lose = new QLabel();
    lose->setText("you lose the idiotic game");
    lose->setGeometry(200,200,200,50);
    scenelose->addWidget(lose);
   }
}

void Game::test()
{
   test1 = new QGraphicsScene();
   test1->setSceneRect(0,0,800,600);
   setScene(test1);
}

void Game::final_win(){
    if(a==3){
            // clear scene and reset a new scene
            scene->clear();
            scenewin = new QGraphicsScene();
            scenewin->setSceneRect(0,0,800,600);
            setScene(scenewin);

            // display win
            QLabel * win = new QLabel();
            win->setText("you win the idiotic game");
            win->setGeometry(200,200,200,50);
            scenewin->addWidget(win);
            }
}

void Game::mousePressEvent(QMouseEvent *event){
    if(id == 1){
    // create minion1
    Minion1 * minion = new Minion1();
    minion->setPos(event->x()-250,event->y());
    scene->addItem(minion);
    }
    else if(id == 2){
    // create minion2
    Minion2 * minion = new Minion2();
    minion->setPos(event->x()-250,event->y());
    scene->addItem(minion);
    }
    if(id == 3){
    // create a minion3
    Minion3 * minion = new Minion3();
    minion->setPos(event->x()-250,event->y());
    scene->addItem(minion);
    }
    if(id == 5){
    // create a ENEMY1
    Enemy1 * minion = new Enemy1();
    minion->setPos(event->x()-250,event->y());
    scene->addItem(minion);
    }
}
