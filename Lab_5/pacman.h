#ifndef PACMAN_H
#define PACMAN_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>

class pacman: public QObject,
        public QGraphicsPixmapItem
{
    Q_OBJECT
private:
    int x = 0;
    int y = 0;
    int vida = 2;


public:
    pacman(QGraphicsItem *carr=0);
    void posicion();
    void posicion(int x_1, int y_1);
    void direccion(int a = 0);
    void advan(int xx, int yy);
    int getX() const;
    void setX(int value);

    int getY() const;
    void setY(int value);
    int getVida() const;
    void setVida();
};

#endif // PACMAN_H
