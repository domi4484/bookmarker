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
  public:
    class APPDATA
    {
    public:
      static const QString LOCATION;
      class ICON
      {
      public:
        static const QString LOCATION;
        static const QString PREFIX;
      }; // ICON
    }; // APPDATA
    class LAUNCHER
    {
    public:
      static const QString LOCATION;
      static const QString PREFIX;
    }; // LAUNCHER
    class RESOURCES
    {
    public:
      static const QString TEMPLATE;
    }; // RESOURCES
  };

  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private slots:
  void on_m_QPushButton_Save_clicked();

private:
  Ui::MainWindow *m_Ui;
};

#endif // MAINWINDOW_H
