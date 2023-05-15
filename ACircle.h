/*ACircle.h*/

#pragma once
#include "Graphics.h"
#include "AColor.h"
#include "APoint.h"

// 圆类
class ACircle : Graphics {
public:
    static int NumOfCircle;

    // 构造函数
    ACircle();
    ACircle(int x, int y, int radius, AColor* color);
    ACircle(const ACircle& obj);
    // 获取圆心
    APoint GetCenter() const;
    // 获取半径
    int GetRadius() const;
    AColor* GetColor() const;
    //获取对象数量
    int GetNum() const;
    // 绘制圆
    void Draw() const;
    ~ACircle();
private:
    APoint center_;

    int radius_;
    AColor* color_;

    ACircle* ptr;
};