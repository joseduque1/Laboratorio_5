#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListIterator>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    vel = 5;
    ui->setupUi(this);
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,500,500);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setGeometry(0,0,510,510);
    //scene->addRect(scene->sceneRect());
    scene->addRect(0,0,500,500);
    ui->graphicsView->setBackgroundBrush(QBrush((QImage(":/images/mapa.png"))));
    jugador = nullptr;

    QPen transpen(Qt::transparent);

    barra = new QGraphicsRectItem(186,296,121,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(45,40,48,30);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(400,40,48,30);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(293,40,69,30);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(133,40,69,30);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(45,102,50,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(400,102,50,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(188,102,120,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(240,102,15,60);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(240,9,15,60);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(133,102,15,110);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(148,150,54,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(347,102,15,110);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(294,150,54,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(186,200,122,62);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(240,313,15,45);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(133,248,15,62);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(347,248,15,62);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(240,410,15,45);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(188,393,120,15);
    barra->setPen(transpen);
    scene->addItem(barra);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(133,344,69,15);
    barra->setPen(transpen);
    scene->addItem(barra);
    barras.push_back(barra);

    barra = new QGraphicsRectItem(293,344,69,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(45,344,50,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(400,344,50,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(79,360,15,45);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(400,360,15,45);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(45,440,155,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(293,440,155,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(133,394,15,45);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(347,394,15,45);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(10,392,30,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(455,392,30,15);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(10,150,82,62);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(10,248,82,62);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra =new QGraphicsRectItem(400,150,82,62);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    barra = new QGraphicsRectItem(400,248,82,62);
    barra->setPen(transpen);
    barras.push_back(barra);
    scene->addItem(barras.last());

    jugador = new pacman();
}
void MainWindow::on_pushButton_clicked()
{
    ui->graphicsView->setBackgroundBrush(QBrush((QImage(":/images/mapa.png"))));
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(onTimeOut()));
    timer->start(1000);

    //bluepen.setWidth();

    jugador->posicion(240,267);
    scene->addItem(jugador);
    niveles();
}

void MainWindow::onTimeOut()
{
    ui->lcdNumber->display(tiempo);
    tiempo--;
    if(tiempo == 0){
        score = 0;
        ui->lcdNumber_2->display(score);
        timer->stop();
        for(auto i : barras){
            scene->removeItem(i);
        }
        for(auto it : cerevect){
            scene->removeItem(it);
        }
        scene->removeItem(jugador);
        ui->graphicsView->setBackgroundBrush(QBrush((QImage(":/images/pacman.png"))));
        jugador->setVida();
        qDebug()<< jugador->getVida();
        if(jugador->getVida()>0){
             tiempo = 40;
             ui->pushButton->setText("Intentar de nuevo.");
        }else{

            tiempo = 40;
            ui->lcdNumber->display(tiempo);
            ui->pushButton->setText("START");
            if(level == 2) level--;
        }
        cerevect.clear();
   }
    if(score == 40 && level == 1){
        score = 0 ;
        ui->lcdNumber_2->display(score);
        level +=1;
        timer->stop();
        tiempo = 40;
        ui->lcdNumber->display(tiempo);
        scene->removeItem(jugador);
        ui->lcdNumber->display(tiempo);
        ui->pushButton->setText("Segundo nivel.");
    }
    else if(score == 70 && level == 2){
        timer->stop();
        scene->removeItem(jugador);
        ui->textEdit->close();
        ui->lcdNumber->close();
        ui->lcdNumber_2->close();
        ui->pushButton->close();
        ui->graphicsView->setBackgroundBrush(QBrush((QImage(":/images/dedo.png"))));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
    delete barra;
    qDeleteAll(barras);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(jugador != nullptr){
    if(event->key()==Qt::Key_F4) close();

    if(event->key()==Qt::Key_D){
        jugador->direccion(1);
        food();
        if((collision(barras) == false)){
            if(jugador->getX() < (scene->height()-36)){
                jugador->advan(5,0);
            }
        }else{
            jugador->setX(barra_->boundingRect().x()-24);
        }

    }

    if(event->key()==Qt::Key_W){
        jugador->direccion(3);
        food();
        if((collision(barras) == false)){
            if(jugador->getY() > 10){
                jugador->advan(0,-5);
            }
        }else{
            jugador->setY(barra_->boundingRect().y()+barra_->boundingRect().height()+1);
        }
    }


    if(event->key()==Qt::Key_S){
        jugador->direccion(4);
        food();
        if((collision(barras) == false)){
            if(jugador->getY() < (scene->height()-36)){
                jugador->advan(0,5);
            }
        }else{
            jugador->setY(barra_->boundingRect().y()-24);
        }
    }

    if(event->key()==Qt::Key_A){
        jugador->direccion(2);
        food();
        if((collision(barras) == false)){
            if(jugador->getX() > 5){
                jugador->advan(-5,0);
            }
        }else{
            jugador->setX(barra_->boundingRect().x()+barra_->boundingRect().width()+1);
        }
    }

    jugador->posicion();
   }
}

bool MainWindow::collision(QVector<QGraphicsItem *> bar0)
{

    for(auto it : bar0){
        if(jugador->collidesWithItem(it)){
            barra_ = it;
            return true;
        }
    }
    return false;
}

void MainWindow::food()
{

    for(auto it : cerevect){
        if(jugador->collidesWithItem(it)){
            cerevect.removeOne(it);
            scene->removeItem(it);
            score += 10;
            ui->lcdNumber_2->display(score);
        }
    }
}


void MainWindow::niveles()
{
    if(level == 1){
        comida = new cereza();
        comida->cerezapos(10,10);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());

        comida = new cereza();
        comida->cerezapos(100,315);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());

        comida = new cereza();
        comida->cerezapos(435,220);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());

        comida = new cereza();
        comida->cerezapos(15,220);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());
    }
    else if(level == 2){
        comida = new cereza();
        comida->cerezapos(10,10);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());

        comida = new cereza();
        comida->cerezapos(100,315);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());

        comida = new cereza();
        comida->cerezapos(435,220);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());

        comida = new cereza();
        comida->cerezapos(15,220);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());

        comida = new cereza();
        comida->cerezapos(455,400);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());

        comida = new cereza();
        comida->cerezapos(455,15);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());

        comida = new cereza();
        comida->cerezapos(435,320);
        cerevect.push_back(comida);
        scene->addItem(cerevect.last());



    }
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}

