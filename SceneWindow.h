#ifndef SCENEWINDOW_H
#define SCENEWINDOW_H

#include <QDialog>

namespace Ui {
    class SceneWindow;
}

class SceneWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SceneWindow(QWidget *parent = 0);
    ~SceneWindow();

private:
    Ui::SceneWindow *ui;
};

#endif // SCENEWINDOW_H
