#ifndef LIDARRENDERER_H
#define LIDARRENDERER_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>
#include <QSemaphore>
#include <QMouseEvent>
#include <vector>

#include "CommunicationManager.h"
#include "Threads/Packets.h"

class LidarRenderer : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    LidarRenderer(QWidget* parent);
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);

private:
    int xRot;
    int yRot = 90;
    int zRot;
    int xRotMax = 360;
    int xRotMin = 0;
    int yRotMax = 360;
    int yRotMin = 0;
    int zRotMax = 360;
    int zRotMin = 0;

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

    void mouseMoveEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

    QPoint lastTouchedPos;

    int sharedMemoryFD;
    struct LIDARData* memoryRegions;

    QOpenGLBuffer* buffer;
    QOpenGLShaderProgram* program;

    float aspect;

    uint posLoc;
    uint colLoc;
    int transformLoc;

    int renderBlock = 0;
    std::vector<int> dirtyBlocks;
    QSemaphore semaphore;

public slots:
    void onPacket(LidarPacket);
};

#endif // LIDARRENDERER_H
