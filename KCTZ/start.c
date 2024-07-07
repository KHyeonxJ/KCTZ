#include "my.h"

void start() {
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	setColor(12); // 글자 색 설정
	printf("  ■■■■■  ■    ■■■■■  ■    ■■■■■  ■      ■■■■■■  ■    \n");
	setColor(13);
	printf("          ■  ■            ■  ■    ■          ■              ■    ■    \n");
	setColor(6);
	printf("          ■■■    ■■■■■■■    ■          ■            ■      ■    \n");
	setColor(10);
	printf("          ■  ■            ■  ■    ■■■■■  ■■■      ■  ■    ■■■\n");
	setColor(11);
	printf("          ■  ■            ■  ■    ■          ■        ■      ■  ■    \n");
	setColor(9);
	printf("    ■                ■■■■■■    ■          ■      ■         ■ ■    \n");
	setColor(1);
	printf("    ■                ■        ■    ■■■■■  ■                    ■    \n");
	printf("    ■■■■■■      ■■■■■■                                            \n\n\n");
	setColor(15);
	Sleep(3000); // 3초 대기
	system("cls"); // 화면 지우기


	gotoxy(27, 13); // (27, 13)으로 이동
	setColor(14);
	printf("<고양이의 마음을 얻어라!>\n\n");
	setColor(15);
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
	printf("		  타자를 잘 치면 고양이의 마음을 얻을 수 있지\n");
	printf("\n\n\n");
	printf("				너도 도전해봐!!");

	Sleep(5000);
	system("cls");
}

int menu() {

	int cho;

	if (1)
	{
		gotoxy(33, 11);
		printf("1) 게임 설명\n\n");
		gotoxy(33, 13);
		printf("2) 게임 시작\n\n");
		gotoxy(33, 15);
		printf("3) 그만두기\n"); // 메뉴 출력

		gotoxy(33, 20);
		printf(" 뭐 할래?  ");
		scanf(" %d", &cho); // 메뉴값 입력

		if (cho != 1 && cho != 2 && cho != 3) {
			system("cls");
			gotoxy(33, 22);
			printf("다시 입력해!\n");
			menu();
		} // 메뉴값 재입력

		else {
			if (cho == 1) {
				system("cls");
				explanation(); // 설명 호출
			}

			else if (cho == 2) {
				system("cls");
				game(); // 게임 호출
			}
			else
			{
				exit(0); // 게임 종료
				return 0;
			}
		}
	}

}

void explanation() {

	int ch;

	setColor(14);
	printf("\n\n <게임 방법>\n");
	setColor(15);
	printf("이 게임은 주어진 영단어를 보고 똑같이 따라서 작성하는 타자게임이야!\n");
	printf("많은 단어를 맞힐수록 다양한 고양이들의 마음을 얻을 수 있지~\n");
	setColor(14);
	printf("\n <단계>\n");
	printf("\n <입력 함수>\n");
	printf("\n <다른 편의 기능들>\n");
	setColor(15);
	printf("이 게임은 총 3가지의 단계가 있어~\n");
	printf("사료(4글자, 34문제, 5초), 트릿(7글자, 34문제, 4초), 츄르(10글자, 29문제, 3초)단계로 나누어져 있지!\n");
	printf("시간이 지날수록 단계가 점점 어려워져~!^^\n");
	setColor(14);
	printf("\n <콤보>\n");
	setColor(15);
	printf("각 단계에서 연속으로 문제를 맞혀 콤보를 달성하면 각 문제만큼의 점수가 기본 점수에 더해져!\n");
	setColor(14);
	printf("\n <이벤트>\n");
	setColor(15);
	printf("각 난이도 당 랜덤으로 나오는 한 개의 이벤트 문제가 있어.\n");
	printf("그 문제를 맞히면 기본 점수와 콤보 점수를 더한 값에 2배를 곱해 총점으로 계산 돼!\n");
	setColor(14);
	printf("\n <점수>\n");
	setColor(15);
	printf("단계별로 1점 3점 5점이고, 각 점수별로 다양한 고양이들의 마음을 얻을 수 있어!!!\n");
	printf("그 기준은 아래와 같아.\n");
	printf("\n[0~50점 : 만쥬]\n[51~150 : 레오]\n[151~300 : 호떡]\n[301~500 : 사고뭉치]\n[501~756(만점) : 앙리 1세]\n");
	setColor(3);
	printf("\n * 다양한 고양이들의 마음을 얻기를 응원할게~~~@_@ *\n");
	setColor(15);
	printf("\n\n\n  <- 돌아가기							게임 시작 ->");

	while (1) {
		ch = _getch();
		if (ch == 224) {
			ch = _getch();
		}

		switch (ch) {
		case 75:
			system("cls");
			menu(); // 좌키 입력 시 메뉴 호출
			break;

		case 77:
			system("cls");
			game(); // 우키 입력 시 게임 호출
			break;
		}
	}
}