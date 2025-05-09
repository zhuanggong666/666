#include "jieke.h"
#include "config.h"
jieke::jieke() {

    //初始化加载飞机图片资源
    m_jieke.load(":/diwut/jieke");

    //初始化飞机坐标
    m_X=(GAME_WIDTH-m_jieke.width())*0.5;
    m_Y=GAME_HEIGHT-m_jieke.height();
    //初始化矩形边框
    m_Rect.setWidth(m_jieke.width());
    m_Rect.setHeight(m_jieke.height());
    m_Rect.moveTo(m_X,m_Y);
}

void jieke::setPosition(int x, int y)
{
    m_X=x;
    m_Y=y;
    m_Rect.moveTo(m_X,m_Y);
}

void jieke::resetPosition()
{
    m_X = GAME_WIDTH/2 - m_Rect.width()/2;
    m_Y = GAME_HEIGHT - 100;
}
