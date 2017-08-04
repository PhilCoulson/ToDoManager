#include "todomanager.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ToDoManager w;
	w.show();
	return a.exec();
}
