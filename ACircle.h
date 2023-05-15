/*ACircle.h*/

#pragma once
#include "Graphics.h"
#include "AColor.h"
#include "APoint.h"

// Բ��
class ACircle : Graphics {
public:
    static int NumOfCircle;

    // ���캯��
    ACircle();
    ACircle(int x, int y, int radius, AColor* color);
    ACircle(const ACircle& obj);
    // ��ȡԲ��
    APoint GetCenter() const;
    // ��ȡ�뾶
    int GetRadius() const;
    AColor* GetColor() const;
    //��ȡ��������
    int GetNum() const;
    // ����Բ
    void Draw() const;
    ~ACircle();
private:
    APoint center_;

    int radius_;
    AColor* color_;

    ACircle* ptr;
};