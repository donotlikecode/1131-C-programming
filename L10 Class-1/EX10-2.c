#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "data_format.h"

class Rigid_body {
public:
    Rigid_body(struct position p1, struct vxy v2)
    {
        pos = p1;
        V = v2;
        point.HP = 0;
        point.MP = 0;
        point.SP = 0;
    }
    void print_motion()
    {
        printf("x=%.2f,y=%.2f,theta=%.2f\n");
    }
    void update_motion();
private:
    char name[20];
    struct position pos;
    struct points point;
    float Velocity;
    struct vxy V;
    float range;
    int counter;
    float diameter = 25;
    bool enable = 0;
};
void Rigid_body::update_motion() {
    pos.X = pos.X + V.Vx * 0.1;
    pos.Y = pos.Y + V.Vy * 0.1;
}
void main()
{
    struct position pos;
    struct vxy V;
    pos.X = 0;
    pos.Y = 0;
    V.Vx = 1;
    V.Vy = 1;
    Rigid_body magic(pos, V); //一開始建構constructor時就要有的形式 (pos, V)  
    magic.print_motion();
    magic.update_motion();
    magic.print_motion();
    
}

/*
data_format.h
#pragma once
struct position {
    float X; // X 坐標
    float Y; // Y 坐標
};

// 速度結構，包含在 X 和 Y 方向的速度分量
struct vxy {
    float Vx; // 在 X 方向的速度
    float Vy; // 在 Y 方向的速度
};

// 狀態點結構，例如血量（HP）、魔力（MP）和護甲（SP）
struct points {
    int HP; // 血量點數
    int MP; // 魔力點數
    int SP; // 護甲點數
};
*/
