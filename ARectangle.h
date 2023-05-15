/*ARectangle.h*/

#include "AColor.h"
#include "APoint.h"
#include "Graphics.h"

// 矩形类
class ARectangle : Graphics {
public:
    static int NumOfRectangle;

    // 构造函数
    ARectangle();
    ARectangle(int x, int y, int width, int height, AColor* color);
    ARectangle(const ARectangle& obj);
    // 获取左上角坐标
    APoint GetLeftTop() const;
    // 获取右下角坐标
    APoint GetRightBottom() const;
    // 获取颜色
    AColor* GetColor() const;
    //获取对象数量
    int GetNum() const;
    //获取ID
    int GetId();
    // 绘制矩形
    void Draw() const;

    ~ARectangle();
private:
    APoint left_top_;
    APoint left_bottom_;
    APoint right_bottom_;
    APoint right_top_;
    AColor* color_;

    ARectangle* ptr;
};
