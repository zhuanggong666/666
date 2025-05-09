#ifndef QIUSHENG_H
#define QIUSHENG_H
#include<QPixmap>
#include<QRect>
class qiusheng
{

public:

    qiusheng();
    //更新坐标
    void updatePosition();
    //敌人资源对象
    QPixmap m_enemy[30];
    //位置
    int m_X;
    int m_Y;
    //敌人矩形边框，用于碰撞检测
    QRect m_Rect;
    //状态
    bool m_Free;
    //速度
    int m_Speed;

};

#endif // QIUSHENG_H
