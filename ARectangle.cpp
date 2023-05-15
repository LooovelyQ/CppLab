/*ARectangle.cpp*/

#include "AColor.h"
#include "APoint.h"
#include "Graphics.h"
#include "ARectangle.h"


// ���캯��
ARectangle::ARectangle() = default;
ARectangle::ARectangle(int x, int y, int width, int height, AColor* color)
    : left_top_(x, y), right_bottom_(x + width, y + height), left_bottom_(x, y + height), right_top_(x + width, y), color_(color) {
    NumOfRectangle++;
    ptr = nullptr;
}
ARectangle::ARectangle(const ARectangle& obj) {
    ptr = new ARectangle(obj);
    NumOfRectangle++;
}
// ��ȡ���Ͻ�����
APoint ARectangle::GetLeftTop() const { return left_top_; }
// ��ȡ���½�����
APoint ARectangle::GetRightBottom() const { return right_bottom_; }
// ��ȡ��ɫ
AColor* ARectangle::GetColor() const { return color_; }
//��ȡ��������
int ARectangle::GetNum() const { return NumOfRectangle; }
// ���ƾ���
void ARectangle::Draw() const {
    // ת����ɫΪ color_t ����
    setcolor(color_->ToColorT());
    setfillcolor(color_->ToColorT());
    // ���ƾ���
    //rectangle(left_top_.GetX(), left_top_.GetY(), right_bottom_.GetX(), right_bottom_.GetY());
    int x[8] = { left_top_.GetX(), left_top_.GetY(), left_bottom_.GetX(), left_bottom_.GetY(), right_bottom_.GetX(), right_bottom_.GetY(), right_top_.GetX(), right_top_.GetY() };
    fillpoly(4, x);
}

ARectangle::~ARectangle() { delete ptr; NumOfRectangle--; }

int ARectangle::NumOfRectangle = 0;