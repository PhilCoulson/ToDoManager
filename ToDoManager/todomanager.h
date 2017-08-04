#ifndef TODOMANAGER_H
#define TODOMANAGER_H

#include <QtGui/QMainWindow>
#include "ui_todomanager.h"

class ToDoManager : public QMainWindow
{
	Q_OBJECT

public:
	ToDoManager(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ToDoManager();

private:
	Ui::ToDoManagerClass ui;
};

#endif // TODOMANAGER_H
