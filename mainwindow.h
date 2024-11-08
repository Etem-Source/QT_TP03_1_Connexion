#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QRandomGenerator>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void slot_buttonClicked();
    void slot_togglePassword();
    void slot_login();

private:
    Ui::MainWindow *ui;
    QPushButton *buttons[10];
    QGridLayout *Grille_boutons;
    QLabel *label;
    QLineEdit *idField;
    QLineEdit *passwordField;
    QCheckBox *showPasswordCheckBox;
    QPushButton *loginButton;
    QLabel *messageLabel;
    QString ID = "200520051";
    QString MDP = "etem";
    int essaies = 3;
};

#endif // MAINWINDOW_H
