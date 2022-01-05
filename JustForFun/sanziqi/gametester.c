#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*************************************\n");
	printf("*************start game**************\n");
	printf("*************************************\n");
	printf("***********1. play     0. exit*******\n");

}

void game()
{
	char ret = 'C';
	//数组存放棋盘信息
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		} 
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}

		
	}
	if (ret == '*')
	{
		printf("玩家赢了！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了！\n");
	}
	else 
	{
		printf("平局了！\n");
	}

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}