#pragma once

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include<QLineEdit>

class Task1 : public QWidget {

  Q_OBJECT

  public:
    Task1(QWidget *parent = 0);

     ~Task1();

  private slots:
    void OnPress();

/*signals:
    void sendSomeSignal();*/

  private:
    QLabel *lbl;
    QLineEdit  *input;
    QPushButton *Press_Button;

};
