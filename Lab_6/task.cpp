#include "task.h"
#include <QGridLayout>
#include <QLineEdit>

Task1::Task1(QWidget *parent)
    : QWidget(parent) {

  Press_Button = new QPushButton("Press me", this);
  input = new QLineEdit("Enter your name", this);

  lbl = new QLabel("", this);

  QGridLayout *grid = new QGridLayout(this);

  grid->addWidget(input, 1, 1);

  grid->addWidget(Press_Button, 3, 5);

  grid->addWidget(lbl);


  setLayout(grid);

  connect(Press_Button, &QPushButton::clicked, this, &Task1::OnPress);
}

void Task1::OnPress() {

    lbl->setText("Hello " + input->text());

}

Task1::~Task1()
{
    delete lbl;

    delete Press_Button;

    delete input;
}
