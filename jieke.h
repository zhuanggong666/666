#ifndef JIEKE_H
#define JIEKE_H
#include<QPixmap>
#include<QRect>
class jieke
{
public:
    jieke();
    //设置位置
    void setPosition(int x,int y);

    //资源 对象
    QPixmap m_jieke;

    //坐标
    int m_X;
    int m_Y;

    //矩形边框
    QRect m_Rect;
    //复位
    void resetPosition();
};

#endif // JIEKE_H
