/*AColor.h*/

#pragma once
#include <graphics.h>
// ��ɫ��
class AColor {
public:
    // ���캯��
    AColor();
    AColor(int r, int g, int b);

    // ��ȡ��ɫ����
    int GetR() const;
    // ��ȡ��ɫ����
    int GetG() const;
    // ��ȡ��ɫ����
    int GetB() const;
    // ������ɫ
    void SetColor(int r, int g, int b);
    // �� RGB ��ɫת��Ϊ color_t ����
    color_t ToColorT() const;
    // �� color_t ����ת��Ϊ RGB ��ɫ
    /*static AColor FromColorT(color_t c) {
        return AColor(GetR(c), getg(c), getb(c));
    }*/
private:
    int r_;
    int g_;
    int b_;
};