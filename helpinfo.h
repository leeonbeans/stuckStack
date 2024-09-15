#ifndef HELPINFO_H
#define HELPINFO_H

#include <QWidget>

namespace Ui {
class helpInfo;
}

class helpInfo : public QWidget
{
    Q_OBJECT

public:
    explicit helpInfo(QWidget *parent = nullptr);
    ~helpInfo();

private:
    Ui::helpInfo *ui;
};

#endif // HELPINFO_H
