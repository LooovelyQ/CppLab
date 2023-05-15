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
// ��ȡԲ��
APoint ACircle::GetCenter() const { return center_; }
// ��ȡ�뾶
int ACircle::GetRadius() const { return radius_; }
// ��ȡ��ɫ
AColor* ACircle::GetColor() const { return color_; }
//��ȡ��������
int ACircle::GetNum() const { return NumOfCircle; }
// ����Բ
void ACircle::Draw() const {
    // ת����ɫΪ color_t ����

    setcolor(color_->ToColorT());
    setfillcolor(color_->ToColorT());
    // ����Բ
    circle(center_.GetX(), center_.GetY(), radius_);
}
ACircle::~ACircle() { delete ptr; NumOfCircle--; }

int ACircle::NumOfCircle = 0;