#include "my.h"

void gotoxy(int x, int y)
{
	COORD Cur = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void setColor(unsigned short text)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}

int main() {

	system("mode con cols=80 lines=40"); // ���� ȭ�� ũ�� ����
	srand((unsigned)time(NULL));

	combo = 0;
	easyScore = 0;
	normalScore = 0;
	hardScore = 0; // ���� �ʱ�ȭ

	//start(); // ���� �Լ� ���
	menu(); // �޴� �Լ� ���

}

int end() {

	gotoxy(26, 11);
	printf("|��������������������������|");
	gotoxy(26, 12);
	printf("|        �����ߴٳ�        |");
	gotoxy(26, 13);
	printf("|�ߣߣߣߣߣߣߣߣߣߣߣߣ�|");
	gotoxy(40, 14);
	printf("||");
	gotoxy(26, 15);
	setColor(6);
	printf("      �ˣߥ�");
	gotoxy(40, 15);
	setColor(15);
	printf("||");
	gotoxy(26, 16);
	setColor(6);
	printf("     ( '��' )");
	gotoxy(40, 16);
	setColor(15);
	printf("||");
	setColor(6);
	gotoxy(26, 17);
	printf("     /  ��  ��\"");
	gotoxy(26, 18);
	printf("\n\n\n\n\n\n\n\n\n");
	setColor(15);

	exit(0);
	return 0;
}