#include "SceneWindow.h"
#include "ui_SceneWindow.h"

SceneWindow::SceneWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SceneWindow)
{
    ui->setupUi(this);
}

SceneWindow::~SceneWindow()
{
    delete ui;
}
