#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "data_format.h"

class Rigid_body {
public:
    char name[20];
    struct position pos;
    struct points point;
    float Velocity;
    struct vxy V;
    float range;
    int counter;
private:
    float diameter = 25;
    bool enable = 0;
};

void main()
{
    Rigid_body magic;
    strcpy(magic.name, "Heal");
    magic.counter = 100;
    magic.point.HP = 20;
    magic.point.SP = 20;
    magic.point.MP = 20;
    magic.pos.X = 0;
    magic.pos.Y = 0;
    magic.pos.Theta = 1.57;
    magic.range = 100;
    magic.Velocity = 200;
    magic.V.Vx = magic.Velocity * cos(magic.pos.Theta);
    magic.V.Vy = magic.Velocity * sin(magic.pos.Theta);
   // magic.enable = 1;
}

/*
data format.h
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
