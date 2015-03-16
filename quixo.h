#ifndef QUIXO_H
#define QUIXO_H

#include <QMainWindow>

namespace Ui {
class Quixo;
}

class Quixo : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Quixo(QWidget *parent = 0);
    ~Quixo();
    
private slots:
    void on_quitButton_clicked();

private:
    Ui::Quixo *ui;
};

#endif // QUIXO_H
