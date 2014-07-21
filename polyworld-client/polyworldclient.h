#ifndef POLYWORLDCLIENT_H
#define POLYWORLDCLIENT_H

#include <QMainWindow>

namespace Ui {
class PolyworldClient;
}

class PolyworldClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit PolyworldClient(QWidget *parent = 0);
    ~PolyworldClient();

private:
    Ui::PolyworldClient *ui;
};

#endif // POLYWORLDCLIENT_H
