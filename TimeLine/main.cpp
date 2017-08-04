#include "timeline.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TimeLine w;
	w.show();
	return a.exec();
}
