#include "my.h"

void gotoxy(int x, int y)
{
	COORD Cur = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void start() {
	printf("\n\n\n\n\n");
	printf("   ■■■■■  ■    ■■■■■  ■    ■■■■■  ■      ■■■■■■  ■    \n");
	printf("           ■  ■            ■  ■    ■          ■              ■    ■    \n");
	printf("           ■■■    ■■■■■■■    ■          ■            ■      ■    \n");
	printf("           ■  ■            ■  ■    ■■■■■  ■■■      ■  ■    ■■■\n");
	printf("           ■  ■            ■  ■    ■          ■        ■      ■  ■    \n");
	printf("     ■                ■■■■■■    ■          ■      ■         ■ ■    \n");
	printf("     ■                ■        ■    ■■■■■  ■                    ■    \n");
	printf("     ■■■■■■      ■■■■■■                                            \n\n\n");

	Sleep(3000);
	system("cls");


	gotoxy(27, 13);
	printf("<고양이의 마음을 얻어라!>\n\n");

	printf("	 		                     _\n");
	printf("	 		                    / )\n");
	printf("	 		                   ( (\n");
	printf("	 		     A.-.A  .-""-.   ) )\n");
	printf(" 			    / , , \\/     \\/ /\n");
	printf("	 		   =\\  t  ;=     / /\n");
	printf("	 		     `--,'  .""|    /\n");
	printf("	 		         || |  \\\\ \\\n");
	printf("	 		        ((,_| ((,_\\\n");


	Sleep(3000);
	system("cls");


	gotoxy(30, 15);
	printf("건대에는 전설이 있어~\n\n");
	printf("		  타자를 잘 치면 고양이의 마음을 얻을 수 있어\n");
	printf("\n\n\n");
	printf("				너도 도전해봐!!");

	Sleep(5000);
	system("cls");
}

int menu() {

	int cho;

	do
	{
		gotoxy(33, 11);
		printf("1) 게임 설명\n\n");
		gotoxy(33, 13);
		printf("2) 게임 시작\n\n");
		gotoxy(33, 15);
		printf("3) 그만두기\n");

		gotoxy(33, 20);
		printf(" 뭐 할래?  ");
		scanf("%d", &cho);

		if (cho != 1 && cho != 2 && cho != 3) {
			system("cls");
			gotoxy(33, 22);
			printf("다시 입력해!\n");
			continue;
		}

		else {
			if (cho == 1) {
				system("cls");
				explanation();
				break;
			}

			else if (cho == 2) {
				system("cls");
				game();
				break;
			}

			else
				return 0;
		}
	} while (1);
}

void explanation() {

	int ch;

	printf("\n\n<게임 방법>\n");
	printf("이 게임은 주어진 영단어를 보고 똑같이 따라서 작성하는 타자게임이야!\n");
	printf("많은 단어를 맞힐수록 다양한 고양이들의 마음을 얻을 수 있지~\n");
	printf("\n<단계>\n");
	printf("이 게임은 총 3가지의 단계가 있어~\n");
	printf("초급(5글자 이하, 34문제, 5초), 중급(6~8글자, 34문제, 4초), 고급(9글자 이상, 29문제, 3초)로 나누어져 있지!\n");
	printf("시간이 지날수록 단계가 점점 어려워지지~!^^\n");
	printf("\n<콤보>\n");
	printf("각 단계에서 연속으로 문제를 맞혀 콤보를 달성하면 각 문제만큼의 점수를 기본 점수에 더해져!\n");
	printf("\n<이벤트>\n");
	printf("각 난이도 당 랜덤으로 나오는 한 개의 이벤트 문제가 있어.\n");
	printf("그 문제를 맞히면 기본 점수와 콤보 점수를 더한 값에 2배를 곱해 총점으로 계산 돼!\n");
	printf("\n<점수>\n");
	printf("문제 1개 당 점수는 1점씩이고, 각 점수별로 다양한 고양이들의 마음을 얻을 수 있어!!!\n");
	printf("그 기준은 아래와 같아.\n");
	printf("\n[0~50점 : 만쥬]\n[51~150 : 레오]\n[151~300 : 호떡]\n[301~500 : 사고뭉치]\n[501~756(만점) : 앙리 1세]\n");
	printf("\n* 다양한 고양이들의 마음을 얻기를 응원할게~~~@_@ *\n");
	printf("\n\n\n  <- 돌아가기							게임 시작 ->");

	while (1) {
		ch = _getch();
		if (ch == 224) {
			ch = _getch();
		}

		switch (ch) {
		case 75:
			system("cls");
			menu();
			break;

		case 77:
			system("cls");
			game();
			break;
		}
	}
}

void game() {

}

int event(int x, char *(arr_1)[5], char *(arr_2)[8], char *(arr_3)[11], char *user) {
	int i;
	srand(time(NULL));
	user = NULL;
	printf("★Event Word★\n");

	if (x == 1) {//초급(사료)단계
		for (i = 0; i < 5; i++) {
			arr_1[71][i] = 'a' + rand() % 26;
			printf("%c", arr_1[71][i]);
		}
		printf("___________\b\b\b\b\b\b\b\b");

		for (i = 0; i < 5; i++)
			scanf("%c", &user[i]);

		if (!strcmp(arr_1[71], user)) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			printf("  O\n");
			return 1;//같을 때 1리턴
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			printf("  X\n");
			return -1;//같지 않을 때 -1리턴
		}
	}

	if (x == 2) {//중급(츄르)단계
		for (i = 0; i < 8; i++) {
			arr_2[71][i] = 'a' + rand() % 26;
			printf("%c", arr_1[71][i]);
		}
		printf("___________\b\b\b\b\b\b\b\b");

		for (i = 0; i < 8; i++)
			scanf("%c", &user[i]);

		if (!strcmp(arr_1[71], user)) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			printf("  O\n");
			return 1;
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			printf("  X\n");
			return -1;
		}
	}
	if (x == 3) {//고급(트릿)단계
		for (i = 0; i < 11; i++) {
			arr_3[71][i] = 'a' + rand() % 26;
			printf("%c", arr_1[71][i]);
		}
		printf("___________\b\b\b\b\b\b\b\b");

		for (i = 0; i < 11; i++)
			scanf("%c", &user[i]);

		if (!strcmp(arr_1[71], user)) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			printf("  O\n");
			return 1;
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			printf("  X\n");
			return -1;
		}
	}
}
int event_score(int real_score, int combo) {// main에서 원 점수와 combo수를 다 세고 event단어를 맞췄는지 틀렸는지 확인 후 맞췄으면 이 함수 호출
	return (real_score + combo) * 2;
}

int main() {

	system("mode con cols=80 lines=40");

	start();
	menu();

}