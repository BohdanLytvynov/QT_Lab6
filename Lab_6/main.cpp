//#include <QApplication>
//#include <QWidget>

//int main(int argc, char *argv[]) {

//    QApplication app(argc, argv);

//    QWidget window;

//    window.resize(250, 150);
//    window.setWindowTitle("Simple example");
//    window.show();

//    return app.exec();
//}

//tooltip
//#include <QApplication>
//#include <QWidget>

//int main(int argc, char *argv[]) {

//  QApplication app(argc, argv);

//  QWidget window;

//  window.resize(250, 150);
//  window.move(300, 300);
//  window.setWindowTitle("ToolTip");
//  window.setToolTip("QWidget");
//  window.show();

//  return app.exec();
//}

//QIcon
//#include <QApplication>
//#include <QWidget>
//#include <QIcon>

//int main(int argc, char *argv[]) {

//  QApplication app(argc, argv);

//  QWidget window;

//  window.resize(250, 150);
//  window.setWindowTitle("Icon");
//  window.setWindowIcon(QIcon("web.png"));
//  window.show();

//  return app.exec();
//}

/*//cursor
#include <QApplication>
#include <QWidget>
#include <QFrame>
#include <QGridLayout>

class Cursors : public QWidget {

 public:
     Cursors(QWidget *parent = 0);
};

Cursors::Cursors(QWidget *parent)
    : QWidget(parent) {

  QFrame *frame1 = new QFrame(this);
  frame1->setFrameStyle(QFrame::Box);
  frame1->setCursor(Qt::SizeAllCursor);

  QFrame *frame2 = new QFrame(this);
  frame2->setFrameStyle(QFrame::Box);
  frame2->setCursor(Qt::WaitCursor);

  QFrame *frame3 = new QFrame(this);
  frame3->setFrameStyle(QFrame::Box);
  frame3->setCursor(Qt::PointingHandCursor);

  QGridLayout *grid = new QGridLayout(this);
  grid->addWidget(frame1, 0, 0);
  grid->addWidget(frame2, 0, 1);
  grid->addWidget(frame3, 0, 2);

  setLayout(grid);
}

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Cursors window;

  window.resize(350, 150);
  window.setWindowTitle("Cursors");
  window.show();

  return app.exec();
}*/

////button
//#include <QApplication>
//#include <QWidget>
//#include <QPushButton>

//class MyButton : public QWidget {

// public:
//     MyButton(QWidget *parent = 0);
//};

//MyButton::MyButton(QWidget *parent)
//    : QWidget(parent) {

//  QPushButton *quitBtn = new QPushButton("Quit", this);
//  quitBtn->setGeometry(50, 40, 75, 30);

//  connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
//}

//int main(int argc, char *argv[]) {

//  QApplication app(argc, argv);

//  MyButton window;

//  window.resize(250, 150);
//  window.setWindowTitle("QPushButton");
//  window.show();

//  return app.exec();
//}

//
#include "task.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  Task1 window;

  window.resize(300, 190);
  window.setWindowTitle("Task 1");
  window.show();

  return app.exec();
}
