/*AController.cpp*/

#include "AController.h"
#include <graphics.h>


AController::AController() {
    // ��ʼ��ͼ�δ���
    initgraph(640, 480); // ���ô��ڴ�СΪ 640x480 ����
}
AController::~AController() {
    // ����ͼ�δ���
    closegraph();
}
