/*ATriangle.cpp*/

#include "AColor.h"
#include "APoint.h"
#include "Graphics.h"
#include "ATriangle.h"

static int NumOfTriangle;

// 构造函数
ATriangle::ATriangle() = default;
ATriangle::ATriangle(int x1, int y1, int x2, int y2, int x3, int y3, AColor* color)
    : p1_(x1, y1), p2_(x2, y2), p3_(x3, y3), color_(color) {
    NumOfTriangle++;
    ptr = nullptr;
}
ATriangle::ATriangle(const ATriangle& obj) {
    ptr = new ATriangle(obj);
    NumOfTriangle++;
}
// 获取顶点1
APoint ATriangle::GetP1() const { return p1_; }
// 获取顶点2
APoint ATriangle::GetP2() const { return p2_; }
// 获取顶点3
APoint ATriangle::GetP3() const { return p3_; }
// 获取颜色
AColor* ATriangle::GetColor() const { return color_; }
//获取对象数量
int ATriangle::GetNum() const { return NumOfTriangle; }
// 绘制三角形
void ATriangle::Draw() const {
    // 转换颜色为 color_t 类型
    setcolor(color_->ToColorT());
    setfillcolor(color_->ToColorT());
    // 绘制三角形
    int x[6] = { p1_.GetX(),p1_.GetY(),p2_.GetX(),p2_.GetY(), p3_.GetX(),p3_.GetY() };
    fillpoly(3, x);
}

ATriangle::~ATriangle() { delete ptr; NumOfTriangle--; }

int ATriangle::NumOfTriangle = 0;