#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_sceneWindow = new SceneWindow( this );

    ui->mdiArea->addSubWindow( m_sceneWindow );
}

MainWindow::~MainWindow()
{
    delete ui;
}
