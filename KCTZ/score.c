#include "my.h"

int easy_fin(int r_cnt, int combo, int ev)
{
	int ch;
	double accuracy;//��Ȯ��

	easyScore = r_cnt + combo;
	accuracy = r_cnt / 34.0;

	if (ev == 1)
		easyScore *= 2; //�̺�Ʈ ���� ������ ��

	gotoxy(30, 12);
	setColor(10);
	printf("���");
	setColor(7);
	printf("�ܰ� �Ϸ�!!!");
	gotoxy(21, 14);
	printf("��Ȯ�� %.2lf%%�� ���� ����: %d, �޺�: %d -> �� ", accuracy, r_cnt, combo);
	setColor(9);
	printf("%d��", easyScore);
	setColor(7);
	printf("�̾�~");


	if ((easyScore >= 0) && (easyScore < 50)) {
		gotoxy(26, 17);
		printf("(");
		setColor(6);
		printf("����");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(6);
		gotoxy(34, 19);
		printf(" �ˣߥ�");
		gotoxy(34, 20);
		setColor(15);
		printf("( '��' )\n\n\n");

	}
	else if ((easyScore >= 51) && (easyScore < 150)) {
		gotoxy(26, 17);
		printf("(");
		setColor(8);
		printf("����");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(6);
		gotoxy(29, 19);
		printf(" �ˣߥ�");
		gotoxy(29, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(38, 19);
		printf(" �ˣߥ�");
		gotoxy(38, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
	}
	else if ((easyScore >= 151) && (easyScore < 300)) {
		gotoxy(26, 17);
		printf("(");
		setColor(14);
		printf("ȣ����");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(6);
		gotoxy(27, 19);
		printf(" �ˣߥ�");
		gotoxy(27, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" �ˣߥ�");
		gotoxy(37, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" �ˣߥ�");
		gotoxy(47, 20);
		printf("( '��' )\n\n\n");
		setColor(15);
	}
	else if ((easyScore >= 301) && (easyScore < 500)) {
		gotoxy(24, 17);
		printf("(");
		setColor(15);
		printf("���,��ġ");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(7);
		gotoxy(17, 19);
		printf(" �ˣߥ�");
		gotoxy(17, 20);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(27, 19);
		printf(" �ˣߥ�");
		gotoxy(27, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" �ˣߥ�");
		gotoxy(37, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" �ˣߥ�");
		gotoxy(47, 20);
		printf("( '��' )\n\n\n");
		setColor(7);
		gotoxy(57, 19);
		printf(" �ˣߥ�");
		gotoxy(57, 20);
		printf("( '��' )\n\n\n");
		setColor(15);
	}
	else
	{
		gotoxy(26, 17);
		printf("(");
		setColor(11);
		printf("�Ӹ� 1��");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(7);
		gotoxy(10, 19);
		printf(" �ˣߥ�");
		gotoxy(10, 20);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(20, 19);
		printf(" �ˣߥ�");
		gotoxy(20, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(30, 19);
		printf(" �ˣߥ�");
		gotoxy(30, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(40, 19);
		printf(" �ˣߥ�");
		gotoxy(40, 20);
		printf("( '��' )\n\n\n");
		setColor(7);
		gotoxy(50, 19);
		printf(" �ˣߥ�");
		gotoxy(50, 20);
		printf("( '��' )\n\n\n");
		setColor(11);
		gotoxy(60, 19);
		printf(" �ˣߥ�");
		gotoxy(60, 20);
		printf("( '��' )\n\n\n");
	}

	gotoxy(0, 35);
	printf("  <- ���ư���					   		  �̾�� ->");

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
	double accuracy;//��Ȯ��

	normalScore = 3 * r_cnt + combo;
	accuracy = r_cnt / 34.0;

	if (ev == 1)
		normalScore *= 2;

	normalScore += easyScore;

	gotoxy(30, 12);
	setColor(10);
	printf("Ʈ��");
	setColor(7);
	printf("�ܰ� �Ϸ�!!!");
	gotoxy(21, 14);
	printf("��Ȯ�� %.2lf%%�� ���� ����: %d, �޺�: %d -> �� ", accuracy, r_cnt, combo);
	setColor(9);
	printf("%d��", normalScore);
	setColor(7);
	printf("�̾�~");


	if ((normalScore >= 0) && (normalScore < 50)) {
		gotoxy(26, 17);
		printf("(");
		setColor(6);
		printf("����");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(6);
		gotoxy(34, 19);
		printf(" �ˣߥ�");
		gotoxy(34, 20);
		setColor(15);
		printf("( '��' )\n\n\n");

	}
	else if ((normalScore >= 51) && (normalScore < 150)) {
		gotoxy(26, 17);
		printf("(");
		setColor(8);
		printf("����");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(6);
		gotoxy(29, 19);
		printf(" �ˣߥ�");
		gotoxy(29, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(38, 19);
		printf(" �ˣߥ�");
		gotoxy(38, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
	}
	else if ((normalScore >= 151) && (normalScore < 300)) {
		gotoxy(26, 17);
		printf("(");
		setColor(14);
		printf("ȣ����");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(6);
		gotoxy(27, 19);
		printf(" �ˣߥ�");
		gotoxy(27, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" �ˣߥ�");
		gotoxy(37, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" �ˣߥ�");
		gotoxy(47, 20);
		printf("( '��' )\n\n\n");
		setColor(15);
	}
	else if ((normalScore >= 301) && (normalScore < 500)) {
		gotoxy(24, 17);
		printf("(");
		setColor(15);
		printf("���,��ġ");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(7);
		gotoxy(17, 19);
		printf(" �ˣߥ�");
		gotoxy(17, 20);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(27, 19);
		printf(" �ˣߥ�");
		gotoxy(27, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" �ˣߥ�");
		gotoxy(37, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" �ˣߥ�");
		gotoxy(47, 20);
		printf("( '��' )\n\n\n");
		setColor(7);
		gotoxy(57, 19);
		printf(" �ˣߥ�");
		gotoxy(57, 20);
		printf("( '��' )\n\n\n");
		setColor(15);
	}
	else
	{
		gotoxy(26, 17);
		printf("(");
		setColor(11);
		printf("�Ӹ� 1��");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(7);
		gotoxy(10, 19);
		printf(" �ˣߥ�");
		gotoxy(10, 20);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(20, 19);
		printf(" �ˣߥ�");
		gotoxy(20, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(30, 19);
		printf(" �ˣߥ�");
		gotoxy(30, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(40, 19);
		printf(" �ˣߥ�");
		gotoxy(40, 20);
		printf("( '��' )\n\n\n");
		setColor(7);
		gotoxy(50, 19);
		printf(" �ˣߥ�");
		gotoxy(50, 20);
		printf("( '��' )\n\n\n");
		setColor(11);
		gotoxy(60, 19);
		printf(" �ˣߥ�");
		gotoxy(60, 20);
		printf("( '��' )\n\n\n");
	}

	gotoxy(0, 35);
	printf("  <- ���ư���					   		  �̾�� ->");

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
	double accuracy;//��Ȯ��

	hardScore = 5 * r_cnt + combo;
	accuracy = r_cnt / 34.0;

	if (ev == 1)
		hardScore *= 2;
	hardScore += normalScore;//normalScore�� easyScore�������� ����������

	gotoxy(30, 12);
	setColor(10);
	printf("��");
	setColor(7);
	printf("�ܰ� �Ϸ�!!!");
	gotoxy(21, 14);
	printf("��Ȯ�� %.2lf%%�� ���� ����: %d, �޺�: %d -> �� ", accuracy, r_cnt, combo);
	setColor(9);
	printf("%d��", hardScore);
	setColor(7);
	printf("�̾�~");


	if ((hardScore >= 0) && (hardScore < 50)) {
		gotoxy(26, 17);
		printf("(");
		setColor(6);
		printf("����");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(6);
		gotoxy(34, 19);
		printf(" �ˣߥ�");
		gotoxy(34, 20);
		setColor(15);
		printf("( '��' )\n\n\n");

	}
	else if ((hardScore >= 51) && (hardScore < 150)) {
		gotoxy(26, 17);
		printf("(");
		setColor(8);
		printf("����");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(6);
		gotoxy(29, 19);
		printf(" �ˣߥ�");
		gotoxy(29, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(38, 19);
		printf(" �ˣߥ�");
		gotoxy(38, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
	}
	else if ((hardScore >= 151) && (hardScore < 300)) {
		gotoxy(26, 17);
		printf("(");
		setColor(14);
		printf("ȣ����");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(6);
		gotoxy(27, 19);
		printf(" �ˣߥ�");
		gotoxy(27, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" �ˣߥ�");
		gotoxy(37, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" �ˣߥ�");
		gotoxy(47, 20);
		printf("( '��' )\n\n\n");
		setColor(15);
	}
	else if ((hardScore >= 301) && (hardScore < 500)) {
		gotoxy(24, 17);
		printf("(");
		setColor(15);
		printf("���,��ġ");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(7);
		gotoxy(17, 19);
		printf(" �ˣߥ�");
		gotoxy(17, 20);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(27, 19);
		printf(" �ˣߥ�");
		gotoxy(27, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(37, 19);
		printf(" �ˣߥ�");
		gotoxy(37, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(47, 19);
		printf(" �ˣߥ�");
		gotoxy(47, 20);
		printf("( '��' )\n\n\n");
		setColor(7);
		gotoxy(57, 19);
		printf(" �ˣߥ�");
		gotoxy(57, 20);
		printf("( '��' )\n\n\n");
		setColor(15);
	}
	else
	{
		gotoxy(26, 17);
		printf("(");
		setColor(11);
		printf("�Ӹ� 1��");
		setColor(7);
		printf("�� ������ �����~!)");
		setColor(7);
		gotoxy(10, 19);
		printf(" �ˣߥ�");
		gotoxy(10, 20);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(20, 19);
		printf(" �ˣߥ�");
		gotoxy(20, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(8);
		gotoxy(30, 19);
		printf(" �ˣߥ�");
		gotoxy(30, 20);
		setColor(15);
		printf("( '��' )\n\n\n");
		setColor(6);
		gotoxy(40, 19);
		printf(" �ˣߥ�");
		gotoxy(40, 20);
		printf("( '��' )\n\n\n");
		setColor(7);
		gotoxy(50, 19);
		printf(" �ˣߥ�");
		gotoxy(50, 20);
		printf("( '��' )\n\n\n");
		setColor(11);
		gotoxy(60, 19);
		printf(" �ˣߥ�");
		gotoxy(60, 20);
		printf("( '��' )\n\n\n");
	}

	gotoxy(0, 35);
	printf("  <- �ٽ��ϱ�					   		  ������ ->");

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