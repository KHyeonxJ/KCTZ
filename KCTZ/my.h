#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void start(); // 시작 화면
int menu(); // 메뉴
void gotoxy(int x, int y);
void explanation(); // 게임 설명
void game(); // 게임 메뉴
void easy(); // 초급 게임
void normal(); // 중급 게임
void hard(); // 고급 게임
int easy_fin(int r_cnt, int combo, int ev); // 초급 점수
int normal_fin(int r_cnt, int combo, int ev); // 중급 점수
int hard_fin(int r_cnt, int combo, int ev); // 고급 점수
int event(int x); // 이벤트
int end(); // 게임 끝

#define SIZE_E 5
#define SIZE_N 8
#define SIZE_H 11 // 단계 별 배열 크기
#define TIME_E 5.0
#define TIME_N 4.0
#define TIME_H 3.0
#define TIME_EVENT 5.0// 단계 별 게임 시간

int combo;
int easyScore;
int normalScore;
int hardScore;