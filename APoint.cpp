/*APoint.cpp*/

#include "APoint.h"

// ���캯��
APoint::APoint() : x_(0), y_(0) { }
APoint::APoint(int x, int y) : x_(x), y_(y) {}
// ��ȡ X ����
int APoint::GetX() const { return x_; }
// ��ȡ Y ����
int APoint::GetY() const { return y_; }
// ��������
void APoint::SetPosition(int x, int y) {
    x_ = x;
    y_ = y;
}
