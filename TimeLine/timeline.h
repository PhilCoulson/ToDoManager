#ifndef TIMELINE_H
#define TIMELINE_H

#include <QtGui/QMainWindow>
#include "ui_timeline.h"

class TimeLine : public QMainWindow
{
	Q_OBJECT

public:
	TimeLine(QWidget *parent = 0, Qt::WFlags flags = 0);
	~TimeLine();

private:
	Ui::TimeLineClass ui;
};

#endif // TIMELINE_H
