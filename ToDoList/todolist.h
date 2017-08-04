#ifndef TODOLIST_H
#define TODOLIST_H

#include <QtGui/QMainWindow>
#include "ui_todolist.h"

class ToDoList : public QMainWindow
{
	Q_OBJECT

public:
	ToDoList(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ToDoList();

private:
	Ui::ToDoListClass ui;
};

#endif // TODOLIST_H
