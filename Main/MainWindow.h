#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Qt includes --------------------------------------------
#include <QMainWindow>

// Forward declarations -----------------------------------
namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:

  class _CONST
  {
    static const QString DEFAULT_LAUNCHER_LOCATION;
  };

  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private:
  Ui::MainWindow *m_Ui;
};

#endif // MAINWINDOW_H
