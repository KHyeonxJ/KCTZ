#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void start(); // ���� ȭ��
int menu(); // �޴�
void gotoxy(int x, int y);
void explanation(); // ���� ����
void game(); // ���� �޴�
void easy(); // �ʱ� ����
void normal(); // �߱� ����
void hard(); // ��� ����
int easy_fin(int r_cnt, int combo, int ev); // �ʱ� ����
int normal_fin(int r_cnt, int combo, int ev); // �߱� ����
int hard_fin(int r_cnt, int combo, int ev); // ��� ����
int event(int x); // �̺�Ʈ
int end(); // ���� ��

#define SIZE_E 5
#define SIZE_N 8
#define SIZE_H 11 // �ܰ� �� �迭 ũ��
#define TIME_E 5.0
#define TIME_N 4.0
#define TIME_H 3.0
#define TIME_EVENT 5.0// �ܰ� �� ���� �ð�

int combo;
int easyScore;
int normalScore;
int hardScore;