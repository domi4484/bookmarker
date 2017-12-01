
// Files includes -----------------------------------------
#include "MainWindow.h"
#include "ui_MainWindow.h"

//-----------------------------------------------------------------------------------------------------------------------------

const QString MainWindow::_CONST::APPDATA::LOCATION (".local/share/bookmarker");

const QString MainWindow::_CONST::APPDATA::ICON::LOCATION = QString("%1/icons").arg(MainWindow::_CONST::APPDATA::LOCATION);
const QString MainWindow::_CONST::APPDATA::ICON::PREFIX   ("%1");

const QString MainWindow::_CONST::LAUNCHER::LOCATION (".local/share/applications");
const QString MainWindow::_CONST::LAUNCHER::PREFIX   ("bookmarker_");

const QString MainWindow::_CONST::RESOURCES::TEMPLATE (":/templates/Template.desktop");

//-----------------------------------------------------------------------------------------------------------------------------

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  m_Ui(new Ui::MainWindow)
{
  m_Ui->setupUi(this);
}

//-----------------------------------------------------------------------------------------------------------------------------

MainWindow::~MainWindow()
{
  delete m_Ui;
}

//-----------------------------------------------------------------------------------------------------------------------------

void MainWindow::on_m_QPushButton_Save_clicked()
{

}
