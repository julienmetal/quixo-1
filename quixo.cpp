#include "quixo.h"
#include "ui_quixo.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>

Quixo::Quixo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Quixo)
{
    ui->setupUi(this);
    QGraphicsScene * ma_scene;
    ma_scene = new QGraphicsScene();
    QGraphicsPixmapItem * mon_item;
    mon_item = new QGraphicsPixmapItem();
    QPixmap * mon_image = new QPixmap(":/1.png");
    mon_item->setPixmap(* mon_image);
    ma_scene->addItem(mon_item);
    ui->ma_vue->setScene(ma_scene);
}

Quixo::~Quixo()
{
    delete ui;
}

void Quixo::on_quitButton_clicked()
{
    this->close();
}
