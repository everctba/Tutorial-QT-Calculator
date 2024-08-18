#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ButtonMais_clicked();

    void on_pushButton_clicked();

    void on_zeraResultado_clicked();

    void on_ButtonMenos_clicked();

    void on_ButtonDivide_clicked();

    void on_ButtonMultiplica_clicked();

    void on_actionsobre_changed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
