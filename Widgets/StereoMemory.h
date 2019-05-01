#ifndef STEREOMEMORY_H
#define STEREOMEMORY_H

#include <QLabel>
#include <QImage>
#include <QSemaphore>

#include "CommunicationManager.h"
#include "Threads/Packets.h"

class StereoMemory : public QLabel
{
    Q_OBJECT
public:
    StereoMemory(QWidget *parent);

protected:
    QImage frame[CAM_NUM_IMAGES];

    int sharedMemoryFD;
    struct StereoData* memoryRegions;
    const unsigned char* memReg;

    int renderBlock = 0;
    std::vector<int> dirtyBlocks;
    QSemaphore semaphore;

signals:
    void newFrame(QImage image);

public slots:
    void onPacket(StereoPacket);
};

#endif // STEREOMEMORY_H
