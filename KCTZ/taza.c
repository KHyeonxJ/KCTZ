#include "my.h"

void gotoxy(int x, int y)
{
	COORD Cur = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void start() {
	printf("\n\n\n\n\n");
	printf("   ������  ��    ������  ��    ������  ��      �������  ��    \n");
	printf("           ��  ��            ��  ��    ��          ��              ��    ��    \n");
	printf("           ����    ��������    ��          ��            ��      ��    \n");
	printf("           ��  ��            ��  ��    ������  ����      ��  ��    ����\n");
	printf("           ��  ��            ��  ��    ��          ��        ��      ��  ��    \n");
	printf("     ��                �������    ��          ��      ��         �� ��    \n");
	printf("     ��                ��        ��    ������  ��                    ��    \n");
	printf("     �������      �������                                            \n\n\n");

	Sleep(3000);
	system("cls");


	gotoxy(27, 13);
	printf("<������� ������ ����!>\n\n");

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
	printf("�Ǵ뿡�� ������ �־�~\n\n");
	printf("		  Ÿ�ڸ� �� ġ�� ������� ������ ���� �� �־�\n");
	printf("\n\n\n");
	printf("				�ʵ� �����غ�!!");

	Sleep(5000);
	system("cls");
}

int menu() {

	int cho;

	do
	{
		gotoxy(33, 11);
		printf("1) ���� ����\n\n");
		gotoxy(33, 13);
		printf("2) ���� ����\n\n");
		gotoxy(33, 15);
		printf("3) �׸��α�\n");

		gotoxy(33, 20);
		printf(" �� �ҷ�?  ");
		scanf("%d", &cho);

		if (cho != 1 && cho != 2 && cho != 3) {
			system("cls");
			gotoxy(33, 22);
			printf("�ٽ� �Է���!\n");
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

	printf("\n\n<���� ���>\n");
	printf("�� ������ �־��� ���ܾ ���� �Ȱ��� ���� �ۼ��ϴ� Ÿ�ڰ����̾�!\n");
	printf("���� �ܾ �������� �پ��� ����̵��� ������ ���� �� ����~\n");
	printf("\n<�ܰ�>\n");
	printf("�� ������ �� 3������ �ܰ谡 �־�~\n");
	printf("�ʱ�(5���� ����, 34����, 5��), �߱�(6~8����, 34����, 4��), ���(9���� �̻�, 29����, 3��)�� �������� ����!\n");
	printf("�ð��� �������� �ܰ谡 ���� ���������~!^^\n");
	printf("\n<�޺�>\n");
	printf("�� �ܰ迡�� �������� ������ ���� �޺��� �޼��ϸ� �� ������ŭ�� ������ �⺻ ������ ������!\n");
	printf("\n<�̺�Ʈ>\n");
	printf("�� ���̵� �� �������� ������ �� ���� �̺�Ʈ ������ �־�.\n");
	printf("�� ������ ������ �⺻ ������ �޺� ������ ���� ���� 2�踦 ���� �������� ��� ��!\n");
	printf("\n<����>\n");
	printf("���� 1�� �� ������ 1�����̰�, �� �������� �پ��� ����̵��� ������ ���� �� �־�!!!\n");
	printf("�� ������ �Ʒ��� ����.\n");
	printf("\n[0~50�� : ����]\n[51~150 : ����]\n[151~300 : ȣ��]\n[301~500 : ���ġ]\n[501~756(����) : �Ӹ� 1��]\n");
	printf("\n* �پ��� ����̵��� ������ ��⸦ �����Ұ�~~~@_@ *\n");
	printf("\n\n\n  <- ���ư���							���� ���� ->");

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
	printf("��Event Word��\n");

	if (x == 1) {//�ʱ�(���)�ܰ�
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
			return 1;//���� �� 1����
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			printf("  X\n");
			return -1;//���� ���� �� -1����
		}
	}

	if (x == 2) {//�߱�(��)�ܰ�
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
	if (x == 3) {//���(Ʈ��)�ܰ�
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
int event_score(int real_score, int combo) {// main���� �� ������ combo���� �� ���� event�ܾ ������� Ʋ�ȴ��� Ȯ�� �� �������� �� �Լ� ȣ��
	return (real_score + combo) * 2;
}

int main() {

	system("mode con cols=80 lines=40");

	start();
	menu();

}