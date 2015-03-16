#include "quixo.h"
#include "ui_quixo.h"

Quixo::Quixo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Quixo)
{
    ui->setupUi(this);
}

Quixo::~Quixo()
{
    delete ui;
}

void Quixo::on_quitButton_clicked()
{
    this->close();
}
