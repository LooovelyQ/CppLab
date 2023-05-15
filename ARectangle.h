/*ARectangle.h*/

#include "AColor.h"
#include "APoint.h"
#include "Graphics.h"

// ������
class ARectangle : Graphics {
public:
    static int NumOfRectangle;

    // ���캯��
    ARectangle();
    ARectangle(int x, int y, int width, int height, AColor* color);
    ARectangle(const ARectangle& obj);
    // ��ȡ���Ͻ�����
    APoint GetLeftTop() const;
    // ��ȡ���½�����
    APoint GetRightBottom() const;
    // ��ȡ��ɫ
    AColor* GetColor() const;
    //��ȡ��������
    int GetNum() const;
    //��ȡID
    int GetId();
    // ���ƾ���
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
