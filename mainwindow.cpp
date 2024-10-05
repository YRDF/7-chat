#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _login_dlg = new LoginDialog(this);
    //把logindialog放到centralwidget中
    setCentralWidget(_login_dlg);
    //_login_dlg->show();

    //创建和注册消息链接
    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchReg);
    _reg_dlg = new RegisterDialog(this);

    //嵌入第一个参数是设置自定义样式，第二个参数是把对话框设为无边框，这样调用setCentralWidget时就会嵌入。
    _login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    _reg_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    _reg_dlg->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
//    if(_login_dlg){
//        delete _login_dlg;
//        _login_dlg = nullptr;
//    }

//    if(_reg_dlg){
//        delete _reg_dlg;
//        _reg_dlg = nullptr;
//    }
}

void MainWindow::SlotSwitchReg()
{
    setCentralWidget(_reg_dlg);
    _login_dlg->hide();
    _reg_dlg->show();
}

