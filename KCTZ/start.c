#include "my.h"

void start() {
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	setColor(12); // ���� �� ����
	printf("  ������  ��    ������  ��    ������  ��      �������  ��    \n");
	setColor(13);
	printf("          ��  ��            ��  ��    ��          ��              ��    ��    \n");
	setColor(6);
	printf("          ����    ��������    ��          ��            ��      ��    \n");
	setColor(10);
	printf("          ��  ��            ��  ��    ������  ����      ��  ��    ����\n");
	setColor(11);
	printf("          ��  ��            ��  ��    ��          ��        ��      ��  ��    \n");
	setColor(9);
	printf("    ��                �������    ��          ��      ��         �� ��    \n");
	setColor(1);
	printf("    ��                ��        ��    ������  ��                    ��    \n");
	printf("    �������      �������                                            \n\n\n");
	setColor(15);
	Sleep(3000); // 3�� ���
	system("cls"); // ȭ�� �����


	gotoxy(27, 13); // (27, 13)���� �̵�
	setColor(14);
	printf("<������� ������ ����!>\n\n");
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
	printf("�Ǵ뿡�� ������ �־�~\n\n");
	printf("		  Ÿ�ڸ� �� ġ�� ������� ������ ���� �� ����\n");
	printf("\n\n\n");
	printf("				�ʵ� �����غ�!!");

	Sleep(5000);
	system("cls");
}

int menu() {

	int cho;

	if (1)
	{
		gotoxy(33, 11);
		printf("1) ���� ����\n\n");
		gotoxy(33, 13);
		printf("2) ���� ����\n\n");
		gotoxy(33, 15);
		printf("3) �׸��α�\n"); // �޴� ���

		gotoxy(33, 20);
		printf(" �� �ҷ�?  ");
		scanf(" %d", &cho); // �޴��� �Է�

		if (cho != 1 && cho != 2 && cho != 3) {
			system("cls");
			gotoxy(33, 22);
			printf("�ٽ� �Է���!\n");
			menu();
		} // �޴��� ���Է�

		else {
			if (cho == 1) {
				system("cls");
				explanation(); // ���� ȣ��
			}

			else if (cho == 2) {
				system("cls");
				game(); // ���� ȣ��
			}
			else
			{
				exit(0); // ���� ����
				return 0;
			}
		}
	}

}

void explanation() {

	int ch;

	setColor(14);
	printf("\n\n <���� ���>\n");
	setColor(15);
	printf("�� ������ �־��� ���ܾ ���� �Ȱ��� ���� �ۼ��ϴ� Ÿ�ڰ����̾�!\n");
	printf("���� �ܾ �������� �پ��� ����̵��� ������ ���� �� ����~\n");
	setColor(14);
	printf("\n <�ܰ�>\n");
	printf("\n <�Է� �Լ�>\n");
	printf("\n <�ٸ� ���� ��ɵ�>\n");
	setColor(15);
	printf("�� ������ �� 3������ �ܰ谡 �־�~\n");
	printf("���(4����, 34����, 5��), Ʈ��(7����, 34����, 4��), ��(10����, 29����, 3��)�ܰ�� �������� ����!\n");
	printf("�ð��� �������� �ܰ谡 ���� �������~!^^\n");
	setColor(14);
	printf("\n <�޺�>\n");
	setColor(15);
	printf("�� �ܰ迡�� �������� ������ ���� �޺��� �޼��ϸ� �� ������ŭ�� ������ �⺻ ������ ������!\n");
	setColor(14);
	printf("\n <�̺�Ʈ>\n");
	setColor(15);
	printf("�� ���̵� �� �������� ������ �� ���� �̺�Ʈ ������ �־�.\n");
	printf("�� ������ ������ �⺻ ������ �޺� ������ ���� ���� 2�踦 ���� �������� ��� ��!\n");
	setColor(14);
	printf("\n <����>\n");
	setColor(15);
	printf("�ܰ躰�� 1�� 3�� 5���̰�, �� �������� �پ��� ����̵��� ������ ���� �� �־�!!!\n");
	printf("�� ������ �Ʒ��� ����.\n");
	printf("\n[0~50�� : ����]\n[51~150 : ����]\n[151~300 : ȣ��]\n[301~500 : ���ġ]\n[501~756(����) : �Ӹ� 1��]\n");
	setColor(3);
	printf("\n * �پ��� ����̵��� ������ ��⸦ �����Ұ�~~~@_@ *\n");
	setColor(15);
	printf("\n\n\n  <- ���ư���							���� ���� ->");

	while (1) {
		ch = _getch();
		if (ch == 224) {
			ch = _getch();
		}

		switch (ch) {
		case 75:
			system("cls");
			menu(); // ��Ű �Է� �� �޴� ȣ��
			break;

		case 77:
			system("cls");
			game(); // ��Ű �Է� �� ���� ȣ��
			break;
		}
	}
}