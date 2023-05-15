/*ATriangle.h*/

#pragma once
#include "AColor.h"
#include "APoint.h"
#include "Graphics.h"

// ��������

class ATriangle : Graphics {
public:
    static int NumOfTriangle;

    // ���캯��
    ATriangle();
    ATriangle(int x1, int y1, int x2, int y2, int x3, int y3, AColor* color);
    ATriangle(const ATriangle& obj);
    // ��ȡ����1
    APoint GetP1() const;
    // ��ȡ����2
    APoint GetP2() const;
    // ��ȡ����3
    APoint GetP3() const;
    // ��ȡ��ɫ
    AColor* GetColor() const;
    //��ȡ��������
    int GetNum() const;
    //��ȡID
    int GetId();
    // ����������
    void Draw() const;

    ~ATriangle();
private:
    APoint p1_;
    APoint p2_;
    APoint p3_;
    AColor* color_;

    ATriangle* ptr;
};