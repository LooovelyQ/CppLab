/*APoint.h*/

#pragma once
class APoint {
public:
    // 构造函数
    APoint();
    APoint(int x, int y);
    // 获取 X 坐标
    int GetX() const;
    // 获取 Y 坐标
    int GetY() const;
    // 设置坐标
    void SetPosition(int x, int y);
private:
    int x_;
    int y_;
};