#include "polyworldclient.h"
#include "ui_polyworldclient.h"

PolyworldClient::PolyworldClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PolyworldClient)
{
    ui->setupUi(this);
}

PolyworldClient::~PolyworldClient()
{
    delete ui;
}
