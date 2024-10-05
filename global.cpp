#include "global.h"

QString gate_url_prefix = "";

//function是一个函数指针，较比c语言写法更简单。
std::function<void(QWidget*)> repolish =[](QWidget *w){
    w->style()->unpolish(w);
    w->style()->polish(w);
};
