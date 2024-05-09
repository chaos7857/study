#pragma once

#define Wide 60
#define Height 20

struct Body
{
    int X;
    int Y;
};

struct Snake
{
    int size;
    struct Body body[Wide*Height];  
}snake;

int food[2] = {0};

int score = 0;
int m_score = 0;

int dx = 0;
int dy = 0;

int lx = 0;
int ly =0;


void InitFood();
void InitSnake();
void ShowUI();
void PlayGame();
void InitWall();
void ShowScore();

