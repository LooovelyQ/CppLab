/*APoint.cpp*/

#include "APoint.h"

// 构造函数
APoint::APoint() : x_(0), y_(0) { }
APoint::APoint(int x, int y) : x_(x), y_(y) {}
// 获取 X 坐标
int APoint::GetX() const { return x_; }
// 获取 Y 坐标
int APoint::GetY() const { return y_; }
// 设置坐标
void APoint::SetPosition(int x, int y) {
    x_ = x;
    y_ = y;
}
