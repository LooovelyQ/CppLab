/*AController.cpp*/

#include "AController.h"
#include <graphics.h>


AController::AController() {
    // 初始化图形窗口
    initgraph(640, 480); // 设置窗口大小为 640x480 像素
}
AController::~AController() {
    // 销毁图形窗口
    closegraph();
}
