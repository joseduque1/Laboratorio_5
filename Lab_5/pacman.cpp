#include "pacman.h"

int pacman::getX() const
{
    return x;
}

void pacman::setX(int value)
{
    x = value;
}

int pacman::getY() const
{
    return y;
}

void pacman::setY(int value)
{
    y = value;
}



int pacman::getVida() const
{
    return vida;
}

void pacman::setVida()
{
    vida -= 1;
}

pacman::pacman(QGraphicsItem *carr): QGraphicsPixmapItem(carr)
{
    setPixmap(QPixmap(":/images/pacmander.png").scaled(23,23));
}

void pacman::posicion()
{
    if(x == 10 && y <= 225 && y >= 215){
        x = 460;
        y = 220;
    }
    else if(x == 460 && y <= 225 && y >= 215){
        x = 10;
        y = 220;
    }
    setPos(x,y);
}

void pacman::posicion(int x_1, int y_1)
{
    x = x_1;
    y = y_1;
    setPos(x_1,y_1);
}

void pacman::direccion(int a)
{
    if(a == 1){

       setPixmap(QPixmap(":/images/pacmander.png").scaled(23,23));
    }
    else if(a == 2){
       setPixmap(QPixmap(":/images/pacmanizq.png").scaled(23,23));
    }
    else if(a == 3){
    setPixmap(QPixmap(":/images/pacamanarri.png").scaled(23,23));
    }
    else if(a == 4){
    setPixmap(QPixmap(":/images/pacmanaba.png").scaled(23,23));
    }
}

void pacman::advan(int xx,int yy)
{

       x += xx;
       y += yy;
}
