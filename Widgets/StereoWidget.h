#ifndef STEREOWIDGET_H
#define STEREOWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QThread>
#include <QVBoxLayout>

#include "CommunicationManager.h"
#include "Threads/Packets.h"
#include "Widgets/StereoMemory.h"

class StereoWidget : public QWidget
{
    Q_OBJECT
public:
    explicit StereoWidget(QWidget *parent = nullptr);


    QLabel* title;
    StereoMemory* display;

protected:
    void showEvent( QShowEvent* event) override;
    void hideEvent( QHideEvent* event) override;

signals:

public slots:
    void onStartReading();
    void onStopReading();
    void newFrame(QImage frame);
};

#endif // STEREOWIDGET_H
