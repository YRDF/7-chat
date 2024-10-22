#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _login_dlg = new LoginDialog(this);
    _login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    //把logindialog放到centralwidget中
    setCentralWidget(_login_dlg);
    //_login_dlg->show();

    //创建和注册消息链接
    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchReg);


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
    _reg_dlg = new RegisterDialog(this);

    //嵌入第一个参数是设置自定义样式，第二个参数是把对话框设为无边框，这样调用setCentralWidget时就会嵌入。
    _reg_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);

    //连接注册界面返回登录信号
   connect(_reg_dlg, &RegisterDialog::sigSwitchLogin, this, &MainWindow::SlotSwitchLogin);

    setCentralWidget(_reg_dlg);
    _login_dlg->hide();
    _reg_dlg->show();
}

void MainWindow::SlotSwitchLogin()
{
    //创建一个CentralWidget, 并将其设置为MainWindow的中心部件
    _login_dlg = new LoginDialog(this);
    _login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setCentralWidget(_login_dlg);

   _reg_dlg->hide();
    _login_dlg->show();
    //连接登录界面注册信号
    connect(_login_dlg, &LoginDialog::switchRegister, this, &MainWindow::SlotSwitchReg);

}

