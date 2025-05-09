#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include<QTimer>
#include "map.h"
#include<Qpainter>
#include"jieke.h"
#include"qiusheng.h"
#include <QLabel>       // 用于显示标题
#include <QPushButton>  // 用于开始按钮
#include <QVBoxLayout>  // 垂直布局管理器
#include <QMediaPlayer>
#include <QAudioOutput>
class MainScene : public QWidget
{

    Q_OBJECT
    // 启动界面的容器部件（覆盖整个主窗口）
    QWidget *startInterface;
    // 标题文本标签
    QLabel *titleLabel;
    // 开始游戏按钮
    QPushButton *startBtn;


    QMediaPlayer* m_bgMusicPlayer;
    QAudioOutput* m_audioOutput;

    QPushButton* m_playBtn;    // 播放按钮
    QPushButton* m_stopBtn;    // 停止按钮

    void createMusicButtons();  // 创建音乐按钮
    void toggleMusicButtons(bool visible);  // 控制按钮显示

    int m_life = 3;          // 添加生命值变量
    bool m_gameOver = false; // 游戏结束标志
public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();
    //初始化场景
    void initScene();
    //启动游戏
    void playGame();

    //更新所有游戏中元素的坐标
    void updatePosition();

    //绘制到游戏中
    void paintEvent(QPaintEvent *);

    //重新移动鼠标事件
    void mouseMoveEvent(QMouseEvent *);

    //地图对象
    map m_map;
    //飞机对象
    jieke m_jieke;
    //定时器
    QTimer m_Timer;
    //敌机出场
    void enemyToScene1();
    //敌机数组
    qiusheng m_enemys1[30];
    //敌机出场间隔记录
    int m_recorder1;
    //碰撞检测
    void collisionDelete();

    // 初始化启动界面（创建控件+布局)
    void initStartInterface();
    // 初始化启动界面（创建控件+布局)
    void switchToGameScene();
     void resetGameState();  // 游戏状态重置方法
    bool m_collisionCoolDown;
public slots:
    void playMusic();
    void stopMusic();

};
#endif // MAINSCENE_H
