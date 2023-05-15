/*ATriangle.cpp*/

#include "AColor.h"
#include "APoint.h"
#include "Graphics.h"
#include "ATriangle.h"

static int NumOfTriangle;

// ���캯��
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
// ��ȡ����1
APoint ATriangle::GetP1() const { return p1_; }
// ��ȡ����2
APoint ATriangle::GetP2() const { return p2_; }
// ��ȡ����3
APoint ATriangle::GetP3() const { return p3_; }
// ��ȡ��ɫ
AColor* ATriangle::GetColor() const { return color_; }
//��ȡ��������
int ATriangle::GetNum() const { return NumOfTriangle; }
// ����������
void ATriangle::Draw() const {
    // ת����ɫΪ color_t ����
    setcolor(color_->ToColorT());
    setfillcolor(color_->ToColorT());
    // ����������
    int x[6] = { p1_.GetX(),p1_.GetY(),p2_.GetX(),p2_.GetY(), p3_.GetX(),p3_.GetY() };
    fillpoly(3, x);
}

ATriangle::~ATriangle() { delete ptr; NumOfTriangle--; }

int ATriangle::NumOfTriangle = 0;