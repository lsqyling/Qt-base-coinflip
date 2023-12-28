//
// Created by 10580.
//

#ifndef QT_BASE_MAIN_SCENE_H
#define QT_BASE_MAIN_SCENE_H

#include <QMainWindow>
#include "choose_level_scene.h"


QT_BEGIN_NAMESPACE
namespace Ui { class main_scene; }
QT_END_NAMESPACE

class main_scene : public QMainWindow
{
Q_OBJECT

public:
    explicit main_scene(QWidget *parent = nullptr);

    ~main_scene() override;

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    choose_level_scene *level_scene_;
    Ui::main_scene *ui;
};


#endif //QT_BASE_MAIN_SCENE_H
