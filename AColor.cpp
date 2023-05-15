/*AColor.cpp*/

#include <graphics.h>
#include "AColor.h"

// 构造函数
AColor::AColor() = default;
AColor::AColor(int r = 0, int g = 0, int b = 0) : r_(r), g_(g), b_(b) {}

// 获取红色分量
int AColor::GetR() const { return r_; }
// 获取绿色分量
int AColor::GetG() const { return g_; }
// 获取蓝色分量
int AColor::GetB() const { return b_; }
// 设置颜色
void AColor::SetColor(int r, int g, int b) {
    r_ = r;
    g_ = g;
    b_ = b;
}
// 将 RGB 颜色转换为 color_t 类型
color_t AColor::ToColorT() const {
    return RGB(r_, g_, b_);
}
