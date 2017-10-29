#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include"game.h"


void game()
{
	char mine[ROWS][COLS];                  //扫雷实际数组
	char show[ROWS][COLS];                  //展示数组
	srand((unsigned int)time(NULL));        //产生随机数
	InitMine(mine, ROWS, COLS);             //初始化数组
	InitShow(show, ROW, COL);
	SetMine(mine, ROW, COL, MINECOUNT);     //设置雷
	DisplayBoard(show, ROW, COL);          //打印棋盘

	PlayGame(mine, show);                   //主逻辑函数

}

void menu()
{
	printf("***************************\n");
	printf("**********扫雷游戏*********\n");
	printf("****** 1.play  0.quit *****\n");
	printf("***************************\n");
}

int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误！");
		}
	} while (input);
	return 0;

}
