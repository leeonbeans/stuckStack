#include "helpinfo.h"
#include "ui_helpinfo.h"

helpInfo::helpInfo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::helpInfo)
{
    ui->setupUi(this);
}

helpInfo::~helpInfo()
{
    delete ui;
}
