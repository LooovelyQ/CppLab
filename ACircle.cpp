/*ACircle.cpp*/

#include "AColor.h"
#include "Graphics.h"
#include "APoint.h"
#include "ACircle.h"

ACircle::ACircle() = default;
ACircle::ACircle(int x, int y, int radius, AColor* color)
    : center_(x, y), radius_(radius), color_(color) {
    NumOfCircle++;
    ptr = nullptr;
}
ACircle::ACircle(const ACircle& obj) {
    ptr = new ACircle(obj);
    NumOfCircle++;
}
// 获取圆心
APoint ACircle::GetCenter() const { return center_; }
// 获取半径
int ACircle::GetRadius() const { return radius_; }
// 获取颜色
AColor* ACircle::GetColor() const { return color_; }
//获取对象数量
int ACircle::GetNum() const { return NumOfCircle; }
// 绘制圆
void ACircle::Draw() const {
    // 转换颜色为 color_t 类型

    setcolor(color_->ToColorT());
    setfillcolor(color_->ToColorT());
    // 绘制圆
    circle(center_.GetX(), center_.GetY(), radius_);
}
ACircle::~ACircle() { delete ptr; NumOfCircle--; }

int ACircle::NumOfCircle = 0;