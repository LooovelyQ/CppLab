/*AColor.h*/

#pragma once
#include <graphics.h>
// 颜色类
class AColor {
public:
    // 构造函数
    AColor();
    AColor(int r, int g, int b);

    // 获取红色分量
    int GetR() const;
    // 获取绿色分量
    int GetG() const;
    // 获取蓝色分量
    int GetB() const;
    // 设置颜色
    void SetColor(int r, int g, int b);
    // 将 RGB 颜色转换为 color_t 类型
    color_t ToColorT() const;
    // 将 color_t 类型转换为 RGB 颜色
    /*static AColor FromColorT(color_t c) {
        return AColor(GetR(c), getg(c), getb(c));
    }*/
private:
    int r_;
    int g_;
    int b_;
};