#ifndef __GAME_H__
#define __GAME_H__


#define ROWS  ROW+2
#define COLS  COL+2
#define ROW   10
#define COL   10
#define MINECOUNT  10



#include<stdio.h>
#include<stdlib.h>
#include<time.h>



void InitMine(char mine[ROWS][COLS], int row, int col);
void InitShow(char show[ROWS][COLS], int row, int col);
void DisplayBoard(char arr[ROWS][COLS], int row, int col);
void SetMine(char mine[ROWS][COLS], int x, int y, int count);
void PlayGame(char mine[ROWS][COLS], char show[ROWS][COLS]);
int  GetMineCount(char mine[ROWS][COLS], int i, int j);
void ResetMine(char mine[ROWS][COLS], int row, int col, int x, int y, int count);
void expand(char mine[ROWS][COLS], int x, int y, char show[ROWS][COLS], int *p);




#endif //__GAME_H__
