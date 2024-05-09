#include"Snake.h"
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<stdio.h>


int main()
{    
    srand((size_t)time(NULL));

    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = sizeof(cci);
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
    InitWall();
    InitFood();
    InitSnake();

    PlayGame();
    

    return 0;
}


void InitFood()
{
    food[0] = rand()% Wide;
    food[1] = rand()%Height;
}


void InitSnake()
{
    snake.size = 2;

    snake.body[0].X = Wide /2 ;
    snake.body[0].Y = Height /2;

    snake.body[1].X = Wide / 2-1;
    snake.body[1].Y = Height/2;
}

void ShowUI()
{
    COORD coord;

    // 用空格盖末尾
    coord.X = lx;
    coord.Y = ly;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    putchar(32);

    for (int i = 0; i < snake.size; i++)
    {
        coord.X = snake.body[i].X;
        coord.Y = snake.body[i].Y;

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

        if (i==0)
        {
            putchar('@');
        }
        else
        {
            putchar('*');
        }
    }
    
    



    coord.X = food[0];
    coord.Y = food[1];
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    putchar('$');
}

void PlayGame()
{
    char key = 'D';
    while (snake.body[0].X >= 0 && snake.body[0].X < Wide && snake.body[0].Y >= 0 && snake.body[0].Y < Height)
    {
        // 显示
        ShowUI();
        ShowScore();
        // 方向控制
        while (_kbhit())
        {
            key = _getch();
        }
        
        switch (key)
        {
        case 'D':
        case 'd':
            dx = 1;dy = 0;break;
        case 'A':
        case 'a':
            dx = -1;dy = 0;break;    
        case 'S':
        case 's':
            dx = 0;dy = 1;break;          
        case 'W':
        case 'w':
            dx = 0;dy = -1;break;        
        }
        
        // 是否和自己撞
        for (int i = 1; i < snake.size; i++)
        {
            if (snake.body[0].X == snake.body[i].X
            && snake.body[0].Y == snake.body[i].Y)
            {
                return;
            }  
        }

        // 和食物的碰撞
        if (snake.body[0].X == food[0] && snake.body[0].Y == food[1])
        {
            InitFood();
            snake.size++;
            score += 10;
            // 关卡内容：难度修改
        }
        

        // 蛇坐标增长

        lx = snake.body[snake.size-1].X;
        ly = snake.body[snake.size-1].Y;

        for (int i = snake.size-1; i > 0; i--)
        {
            snake.body[i].X = snake.body[i-1].X;
            snake.body[i].Y = snake.body[i-1].Y;
        }

        snake.body[0].X += dx;
        snake.body[0].Y += dy; 
        
        Sleep(100);
        // system("cls");

    }
    
}


// void InitWall()
// {
//     for (int i = 0; i <= Height; i++)
//     {
//         for (int j = 0; j <= Wide; j++)
//         {
//             if (i == Height)
//             {
//                 putchar('=');
//             }else if (j==Wide)
//             {
//                 putchar('=');
//             }
//             else
//             {
//                 putchar(32);
//             }  
//         }
//         putchar('\n');
//     }
// }
void InitWall()
{
    COORD coord;
    
    for (int i = 0; i <= Height; i++)
    {
        coord.X = Wide;
        coord.Y = i;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        putchar('|');
    }
    
    for (int i = 0; i < Wide; i++)
    {
        coord.X = i;
        coord.Y = Height;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        putchar('=');
    }

    
}

void ShowScore()
{
    COORD coord;
    coord.X = 4*Wide/3;
    coord.Y = Height/2;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    printf("score = %d", score);
}