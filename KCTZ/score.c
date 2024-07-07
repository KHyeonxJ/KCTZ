#include "my.h"

int easy_fin(int r_cnt, int combo, int ev)
{
	int ch;
	double accuracy;//정확도

	easyScore = r_cnt + combo;
	accuracy = r_cnt / 34.0;

	if (ev == 1)
		easyScore *= 2; //이벤트 문제 맞혔을 때

	gotoxy(30, 12);
	setColor(10);
	printf("사료");
	setColor(7);
	printf("단계 완료!!!");
	gotoxy(21, 14);
	printf("정확도 %.2lf%%로 맞힌 문제: %d, 콤보: %d -> 총 ", accuracy, r_cnt, combo);
	setColor(9);
	printf("%d점", easyScore);
	setColor(7);
	printf("이야~");


	if ((easyScore >= 0) && (easyScore < 50)) {
		gotoxy(26, 17);
		printf("(");
		setColor(6);
		printf("만쥬");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(6);
		gotoxy(34, 19);
		printf(" Λ＿Λ");
		gotoxy(34, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");

	}
	else if ((easyScore >= 51) && (easyScore < 150)) {
		gotoxy(26, 17);
		printf("(");
		setColor(8);
		printf("레오");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(6);
		gotoxy(29, 19);
		printf(" Λ＿Λ");
		gotoxy(29, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(38, 19);
		printf(" Λ＿Λ");
		gotoxy(38, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
	}
	else if ((easyScore >= 151) && (easyScore < 300)) {
		gotoxy(26, 17);
		printf("(");
		setColor(14);
		printf("호떡이");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(6);
		gotoxy(27, 19);
		printf(" Λ＿Λ");
		gotoxy(27, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" Λ＿Λ");
		gotoxy(37, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" Λ＿Λ");
		gotoxy(47, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(15);
	}
	else if ((easyScore >= 301) && (easyScore < 500)) {
		gotoxy(24, 17);
		printf("(");
		setColor(15);
		printf("사고,뭉치");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(7);
		gotoxy(17, 19);
		printf(" Λ＿Λ");
		gotoxy(17, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(27, 19);
		printf(" Λ＿Λ");
		gotoxy(27, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" Λ＿Λ");
		gotoxy(37, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" Λ＿Λ");
		gotoxy(47, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(7);
		gotoxy(57, 19);
		printf(" Λ＿Λ");
		gotoxy(57, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(15);
	}
	else
	{
		gotoxy(26, 17);
		printf("(");
		setColor(11);
		printf("앙리 1세");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(7);
		gotoxy(10, 19);
		printf(" Λ＿Λ");
		gotoxy(10, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(20, 19);
		printf(" Λ＿Λ");
		gotoxy(20, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(30, 19);
		printf(" Λ＿Λ");
		gotoxy(30, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(40, 19);
		printf(" Λ＿Λ");
		gotoxy(40, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(7);
		gotoxy(50, 19);
		printf(" Λ＿Λ");
		gotoxy(50, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(11);
		gotoxy(60, 19);
		printf(" Λ＿Λ");
		gotoxy(60, 20);
		printf("( 'ㅅ' )\n\n\n");
	}

	gotoxy(0, 35);
	printf("  <- 돌아가기					   		  이어가기 ->");

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
			normal();
			break;
		}
	}

}

int normal_fin(int r_cnt, int combo, int ev)
{
	int ch;
	double accuracy;//정확도

	normalScore = 3 * r_cnt + combo;
	accuracy = r_cnt / 34.0;

	if (ev == 1)
		normalScore *= 2;

	normalScore += easyScore;

	gotoxy(30, 12);
	setColor(10);
	printf("트릿");
	setColor(7);
	printf("단계 완료!!!");
	gotoxy(21, 14);
	printf("정확도 %.2lf%%로 맞힌 문제: %d, 콤보: %d -> 총 ", accuracy, r_cnt, combo);
	setColor(9);
	printf("%d점", normalScore);
	setColor(7);
	printf("이야~");


	if ((normalScore >= 0) && (normalScore < 50)) {
		gotoxy(26, 17);
		printf("(");
		setColor(6);
		printf("만쥬");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(6);
		gotoxy(34, 19);
		printf(" Λ＿Λ");
		gotoxy(34, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");

	}
	else if ((normalScore >= 51) && (normalScore < 150)) {
		gotoxy(26, 17);
		printf("(");
		setColor(8);
		printf("레오");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(6);
		gotoxy(29, 19);
		printf(" Λ＿Λ");
		gotoxy(29, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(38, 19);
		printf(" Λ＿Λ");
		gotoxy(38, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
	}
	else if ((normalScore >= 151) && (normalScore < 300)) {
		gotoxy(26, 17);
		printf("(");
		setColor(14);
		printf("호떡이");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(6);
		gotoxy(27, 19);
		printf(" Λ＿Λ");
		gotoxy(27, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" Λ＿Λ");
		gotoxy(37, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" Λ＿Λ");
		gotoxy(47, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(15);
	}
	else if ((normalScore >= 301) && (normalScore < 500)) {
		gotoxy(24, 17);
		printf("(");
		setColor(15);
		printf("사고,뭉치");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(7);
		gotoxy(17, 19);
		printf(" Λ＿Λ");
		gotoxy(17, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(27, 19);
		printf(" Λ＿Λ");
		gotoxy(27, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" Λ＿Λ");
		gotoxy(37, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" Λ＿Λ");
		gotoxy(47, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(7);
		gotoxy(57, 19);
		printf(" Λ＿Λ");
		gotoxy(57, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(15);
	}
	else
	{
		gotoxy(26, 17);
		printf("(");
		setColor(11);
		printf("앙리 1세");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(7);
		gotoxy(10, 19);
		printf(" Λ＿Λ");
		gotoxy(10, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(20, 19);
		printf(" Λ＿Λ");
		gotoxy(20, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(30, 19);
		printf(" Λ＿Λ");
		gotoxy(30, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(40, 19);
		printf(" Λ＿Λ");
		gotoxy(40, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(7);
		gotoxy(50, 19);
		printf(" Λ＿Λ");
		gotoxy(50, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(11);
		gotoxy(60, 19);
		printf(" Λ＿Λ");
		gotoxy(60, 20);
		printf("( 'ㅅ' )\n\n\n");
	}

	gotoxy(0, 35);
	printf("  <- 돌아가기					   		  이어가기 ->");

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
			hard();
			break;
		}
	}

}

int hard_fin(int r_cnt, int combo, int ev)
{
	int ch;
	double accuracy;//정확도

	hardScore = 5 * r_cnt + combo;
	accuracy = r_cnt / 34.0;

	if (ev == 1)
		hardScore *= 2;
	hardScore += normalScore;//normalScore엔 easyScore점수까지 더해져있음

	gotoxy(30, 12);
	setColor(10);
	printf("츄르");
	setColor(7);
	printf("단계 완료!!!");
	gotoxy(21, 14);
	printf("정확도 %.2lf%%로 맞힌 문제: %d, 콤보: %d -> 총 ", accuracy, r_cnt, combo);
	setColor(9);
	printf("%d점", hardScore);
	setColor(7);
	printf("이야~");


	if ((hardScore >= 0) && (hardScore < 50)) {
		gotoxy(26, 17);
		printf("(");
		setColor(6);
		printf("만쥬");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(6);
		gotoxy(34, 19);
		printf(" Λ＿Λ");
		gotoxy(34, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");

	}
	else if ((hardScore >= 51) && (hardScore < 150)) {
		gotoxy(26, 17);
		printf("(");
		setColor(8);
		printf("레오");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(6);
		gotoxy(29, 19);
		printf(" Λ＿Λ");
		gotoxy(29, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(38, 19);
		printf(" Λ＿Λ");
		gotoxy(38, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
	}
	else if ((hardScore >= 151) && (hardScore < 300)) {
		gotoxy(26, 17);
		printf("(");
		setColor(14);
		printf("호떡이");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(6);
		gotoxy(27, 19);
		printf(" Λ＿Λ");
		gotoxy(27, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" Λ＿Λ");
		gotoxy(37, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" Λ＿Λ");
		gotoxy(47, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(15);
	}
	else if ((hardScore >= 301) && (hardScore < 500)) {
		gotoxy(24, 17);
		printf("(");
		setColor(15);
		printf("사고,뭉치");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(7);
		gotoxy(17, 19);
		printf(" Λ＿Λ");
		gotoxy(17, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(27, 19);
		printf(" Λ＿Λ");
		gotoxy(27, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" Λ＿Λ");
		gotoxy(37, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" Λ＿Λ");
		gotoxy(47, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(7);
		gotoxy(57, 19);
		printf(" Λ＿Λ");
		gotoxy(57, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(15);
	}
	else
	{
		gotoxy(26, 17);
		printf("(");
		setColor(11);
		printf("앙리 1세");
		setColor(7);
		printf("의 마음을 얻었당~!)");
		setColor(7);
		gotoxy(10, 19);
		printf(" Λ＿Λ");
		gotoxy(10, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(20, 19);
		printf(" Λ＿Λ");
		gotoxy(20, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(8);
		gotoxy(30, 19);
		printf(" Λ＿Λ");
		gotoxy(30, 20);
		setColor(15);
		printf("( 'ㅅ' )\n\n\n");
		setColor(6);
		gotoxy(40, 19);
		printf(" Λ＿Λ");
		gotoxy(40, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(7);
		gotoxy(50, 19);
		printf(" Λ＿Λ");
		gotoxy(50, 20);
		printf("( 'ㅅ' )\n\n\n");
		setColor(11);
		gotoxy(60, 19);
		printf(" Λ＿Λ");
		gotoxy(60, 20);
		printf("( 'ㅅ' )\n\n\n");
	}

	gotoxy(0, 35);
	printf("  <- 다시하기					   		  끝내기 ->");

	while (1) {
		ch = _getch();
		if (ch == 224) {
			ch = _getch();
		}

		switch (ch) {
		case 75:
			system("cls");
			game();
			break;

		case 77:
			end();
			return 0;
		}
	}

}