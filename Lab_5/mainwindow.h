#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QList>
#include <vector>
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QTimer>
#include "pacman.h"
#include <QVector>
#include "cereza.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void keyPressEvent(QKeyEvent *event);
    bool collision(QVector<QGraphicsItem *> bar0);
    void food();
    void titulo();
    void niveles();

private slots:

    void on_pushButton_clicked();
    void onTimeOut();
    void on_pushButton_2_clicked();

private:
    int n;
    int vel;
    int tiempo = 40;
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsRectItem *barra;
    QGraphicsItem *barra_;
    pacman *jugador;
    QVector<QGraphicsItem *> barras;
    QVector<QGraphicsItem *> cerevect;
    QTimer *timer;
    cereza *comida;
    int score = 0;
    int level = 1;
};
#endif // MAINWINDOW_H
