/*ATriangle.h*/

#pragma once
#include "AColor.h"
#include "APoint.h"
#include "Graphics.h"

// 三角形类

class ATriangle : Graphics {
public:
    static int NumOfTriangle;

    // 构造函数
    ATriangle();
    ATriangle(int x1, int y1, int x2, int y2, int x3, int y3, AColor* color);
    ATriangle(const ATriangle& obj);
    // 获取顶点1
    APoint GetP1() const;
    // 获取顶点2
    APoint GetP2() const;
    // 获取顶点3
    APoint GetP3() const;
    // 获取颜色
    AColor* GetColor() const;
    //获取对象数量
    int GetNum() const;
    //获取ID
    int GetId();
    // 绘制三角形
    void Draw() const;

    ~ATriangle();
private:
    APoint p1_;
    APoint p2_;
    APoint p3_;
    AColor* color_;

    ATriangle* ptr;
};