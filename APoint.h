/*APoint.h*/

#pragma once
class APoint {
public:
    // ���캯��
    APoint();
    APoint(int x, int y);
    // ��ȡ X ����
    int GetX() const;
    // ��ȡ Y ����
    int GetY() const;
    // ��������
    void SetPosition(int x, int y);
private:
    int x_;
    int y_;
};