/*AColor.cpp*/

#include <graphics.h>
#include "AColor.h"

// ���캯��
AColor::AColor() = default;
AColor::AColor(int r = 0, int g = 0, int b = 0) : r_(r), g_(g), b_(b) {}

// ��ȡ��ɫ����
int AColor::GetR() const { return r_; }
// ��ȡ��ɫ����
int AColor::GetG() const { return g_; }
// ��ȡ��ɫ����
int AColor::GetB() const { return b_; }
// ������ɫ
void AColor::SetColor(int r, int g, int b) {
    r_ = r;
    g_ = g;
    b_ = b;
}
// �� RGB ��ɫת��Ϊ color_t ����
color_t AColor::ToColorT() const {
    return RGB(r_, g_, b_);
}
