#include "qiusheng.h"
#include"config.h"
qiusheng::qiusheng() {
    //资源加载
    for(int i=0;i<30;i++){
        if(i%6==0){
            m_enemy[i].load(":/diwut/ball");

        }
        if(i%6==1){
            m_enemy[i].load(":/diwut/gunzi");

        }
        if(i%6==2){
            m_enemy[i].load(":/diwut/citie");

        }
        if(i%6==3){
            m_enemy[i].load(":/diwut/helmet");
        }
        if(i%6==4){
            m_enemy[i].load(":/diwut/gun");

        }
        if(i%6==5){
            m_enemy[i].load(":/diwut/rocket");

        }

    }
    //位置坐标
    m_X=0;
    m_Y=0;
    //状态
    m_Free=true;
    //速度
    m_Speed=5;
    //矩形框
    for(int i=0;i<30;i++){
    m_Rect.setWidth(m_enemy[i].width());
    m_Rect.setHeight(m_enemy[i].height());
    m_Rect.moveTo(m_X,m_Y);
    }
}



void qiusheng::updatePosition()
{
   //空闲状态不计算
    if(m_Free){
        return;
    }
    m_Y+=m_Speed;
    m_Rect.moveTo(m_X,m_Y);

    if(m_Y>=GAME_HEIGHT+m_Rect.height()){
        m_Free=true;
    }
}





