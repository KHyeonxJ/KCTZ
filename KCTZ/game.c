#include "my.h"

void game() {

	int cho;

	do
	{
		gotoxy(30, 11);
		printf("1) ��� �ܰ� (�ʱ�)\n\n");
		gotoxy(30, 13);
		printf("2) Ʈ�� �ܰ� (�߱�)\n\n");
		gotoxy(30, 15);
		printf("3) �� �ܰ� (���)\n"); // �޴� ���

		gotoxy(33, 20);
		printf(" �� �ҷ�?  ");
		scanf("%d", &cho); // �޴��� �Է�


		if (cho != 1 && cho != 2 && cho != 3) {
			system("cls");
			gotoxy(33, 22);
			printf("�ٽ� �Է���!\n");
			continue;
		} // �޴��� ���Է�

		else {
			if (cho == 1) {
				setColor(14);
				gotoxy(30, 11);
				printf("1) ��� �ܰ� (�ʱ�)\n\n");
				setColor(15);
				Sleep(1000);
				system("cls");
				easy(); // �ʱ� �ܰ� ȣ��
				break;
			}

			else if (cho == 2) {
				setColor(14);
				gotoxy(30, 13);
				printf("2) Ʈ�� �ܰ� (�߱�)\n\n");
				setColor(15);
				Sleep(1000);
				system("cls");
				normal(); // �߱� �ܰ� ȣ��
				event(2);
				break;
			}

			else {
				setColor(14);
				gotoxy(30, 15);
				printf("3) �� �ܰ� (���)\n");
				setColor(15);
				Sleep(1000);
				system("cls");
				hard(); // ��� �ܰ� ȣ��
				event(3);
				break;
			}

		}

	} while (1);

}

void easy()
{
	system("cls");
	int n, s_time, r_cnt = 0;
	int i, j, time_flag;
	char ch;
	char user[100] = { '\0', };
	char* word[71] = {
		"army","auto","atom", "aura",  "baby", "back", "band", "ball", "bank", "base", "bird", "bowl", "cake", "camp", "calm", "card", "care",
		"cape", "coin", "come", "cold", "chef", "city", "code", "deck", "dark", "date", "deer",  "duck", "fair", "fork",  "face", "fall","foot",
		"free", "draw", "gate", "game", "gray", "hair", "hear", "hour", "goat", "hail", "keep", "idle", "know","lake", "jazz", "left", "july",
		"lion", "look", "moon","move","nose", "keep", "land", "mall", "park", "plan","push", "rice", "room", "same", "milk", "sing", "team",
		"time", "wait", "zero" }; //70��


	for (i = 0; i <= 33; i++)
	{
		n = rand() % 70;
		s_time = time(0);
		user[SIZE_E] = 'NULL';
		setColor(14);
		printf("%s \n", word[n]);
		setColor(15);
		printf("____\b\b\b\b");

		_strset(user, '\0');
		j = 0;
		time_flag = 0;

		while (1) {

			if (_kbhit()) {

				ch = _getch();
				printf("%c", ch);

				if (ch == 13)
					break;

				if (j > 0 && ch == 8) {
					user[j] = '\0';
					user[j - 1] = '\0';
					j--;
					printf(" \b");
				}
				else if (j == 0 && ch == 8) {
					user[j] = '\0';
					printf(" \b");
				}
				else {
					user[j] = ch;
					j++;
				}

			}

			if (time(0) - s_time > TIME_E) {
				setColor(12);
				printf("\n�ð��ʰ�\n\n");
				setColor(15);
				time_flag++;
				break;
			} 
			
			// (���� �ð� - ���� �� ���� ���� �ð�)�� 5�ʺ��� Ŭ ��� �ð� �ʰ� ���

		}

		if (!strcmp(user, word[n]) && time_flag == 0) // ���� ��
		{
			setColor(9);
			printf("	O\n\n");
			r_cnt += 1; // ���� ���� �߰�
			combo++; // �޺� ���� �߰�
			setColor(15);
		}

		else if (strcmp(user, word[n]) && time_flag == 0) {
			setColor(12);
			printf("	X\n\n");
			combo = 0; // �޺� ���� �ʱ�ȭ
			setColor(15);
		}

	}

	int ev = event(1); // �̺�Ʈ ����
	system("cls");
	easy_fin(r_cnt, combo, ev);
}

void normal()
{

	int n, s_time, r_cnt = 0;
	int i, j, time_flag;
	char ch;
	char user[100] = { '\0', };
	char* word[65] = {
		"aunties", "aurally", "aureole", "aurorae", "auroras",
		"backups", "badness", "baffler", "bagfuls", "baggier",
		"channel", "chanter", "chaotic", "chapels", "chapman",
		"devours", "dextral", "diagram", "dialing", "dialler",
		"escarps", "escorts", "espying", "essayed", "estates",
		"flowage", "flowery", "flubbed", "fluffed", "flukier",
		"gripped", "gripper", "gritted", "grizzly", "groaner",
		"hairpin", "halcyon", "halfwit", "halifax", "hallway",
		"iciness", "ideally", "idolise", "idyllic", "ignited",
		"journey", "joyless", "jubilee", "judders", "juggled",
		"keyword", "kibbutz", "kickoff", "kidnaps", "kidskin",
		"ladybug", "lagging", "lambast", "lambing", "laments",
		"marches", "margins", "mariner", "marital", "markets" }; // �߱� �ܾ� 60��

	for (i = 0; i <= 33; i++)
	{
		n = rand() % 60;
		s_time = time(0);
		user[SIZE_N] = 'NULL';
		setColor(14);
		printf("%s \n", word[n]);
		setColor(15);
		printf("_______\b\b\b\b\b\b\b");

		_strset(user, '\0');
		j = 0;
		time_flag = 0;

		while (1) {
			if (_kbhit()) {
				ch = _getch();
				printf("%c", ch);
				if (ch == 13)
					break;

				if (j > 0 && ch == 8) {
					user[j] = '\0';
					user[j - 1] = '\0';
					j--;
					printf(" \b");
				}
				else if (j == 0 && ch == 8) {
					user[j] = '\0';
					printf(" \b");
				}
				else {
					user[j] = ch;
					j++;
				}
			}
			if (time(0) - s_time > TIME_N) {
				setColor(12);
				printf("\n�ð��ʰ�\n\n");
				setColor(15);
				time_flag++;
				break;
			}
		}
		if (!strcmp(user, word[n]) && time_flag == 0) // ���� ��
		{
			setColor(9);
			printf("		O\n\n");
			r_cnt += 1; // ���� ���� �߰�
			combo++; // �޺� ���� �߰�
			setColor(15);
		}

		else if (strcmp(user, word[n]) && time_flag == 0) {
			setColor(12);
			printf("		X\n\n");
			combo = 0; // �޺� ���� �ʱ�ȭ
			setColor(15);
		}
	}

	int ev = event(2);
	system("cls");
	normal_fin(r_cnt, combo, ev);
}

void hard()
{

	int n, s_time, r_cnt = 0;
	int i, j, time_flag;
	char ch;
	char user[100] = { '\0', };
	char* word[61] = {
		"abruptness", "absolutism", "accusatory", "addressees", "admiration", "altruistic", "artificial",
		"bankrupted", "beautician", "behaviours", "biographer", "blushingly", "bookbinder", "broomstick",
		"camelopard", "capability", "cardiology", "centigrade", "charmingly", "cloudburst", "cognisance",
		"collection", "commentary", "commercial", "complement", "confluence", "contractor", "dedication",
		"definition", "delectable", "depressive", "descendent", "detachment", "earthquake", "elongation",
		"eloquently", "enthusiasm", "especially", "extendible", "fabricator", "favoritism", "fingertips",
		"footballer", "futuristic", "generality", "gravestone", "habitation", "handsomest", "icebreaker",
		"illiterate", "invariance", "jeopardise", "journalism", "kidnapping", "laundering", "management",
		"meaningful", "metropolis", "navigation", "neutralist" }; // ��� �ܾ� 60��

	for (i = 0; i <= 28; i++)
	{
		n = rand() % 60;
		s_time = time(0);
		user[SIZE_H] = 'NULL';
		setColor(14);
		printf("%s \n", word[n]);
		setColor(15);
		printf("__________\b\b\b\b\b\b\b\b\b\b");

		_strset(user, '\0');
		j = 0;
		time_flag = 0;
		while (1) {
			if (_kbhit()) {
				ch = _getch();
				printf("%c", ch);
				if (ch == 13)
					break;

				if (j > 0 && ch == 8) {
					user[j] = '\0';
					user[j - 1] = '\0';
					j--;
					printf(" \b");
				}

				else if (j == 0 && ch == 8) {
					user[j] = '\0';
					printf(" \b");
				}

				else {
					user[j] = ch;
					j++;
				}
			}
			if (time(0) - s_time > TIME_H) {
				setColor(12);
				printf("\n�ð��ʰ�\n\n");
				setColor(15);
				time_flag++;
				break;
			}
		}

		if (!strcmp(user, word[n]) && time_flag == 0) // ���� ��
		{
			setColor(9);
			printf("		O\n\n");
			r_cnt += 1; // ���� ���� �߰�
			combo++; // �޺� ���� �߰�
			setColor(15);
		}

		else if (strcmp(user, word[n]) && time_flag == 0) {
			setColor(12);
			printf("		X\n\n");
			combo = 0; // �޺� ���� �ʱ�ȭ
			setColor(15);
		}
	}

	int ev = event(3);
	system("cls");
	hard_fin(r_cnt, combo, ev);
}

int event(int x) {
	int i, ch, s_time, j = 0;
	int time_flag = 0;
	s_time = time(0);
	char user[13] = { NULL };
	char arr[13] = { NULL };

	setColor(10);
	printf("��Event Word��\n");
	setColor(15);


	if (x == 1) {//�ʱ�(���)�ܰ�
		for (i = 0; i < 5; i++) {
			arr[i] = 'a' + rand() % 26;
			setColor(14);
			printf("%c", arr[i]);
			setColor(15);
		}
		printf("\n_____\b\b\b\b\b");

		while (1) {

			if (_kbhit()) {

				ch = _getch();
				printf("%c", ch);

				if (ch == 13)
					break;

				if (j > 0 && ch == 8) {
					user[j] = '\0';
					user[j - 1] = '\0';
					j--;
					printf(" \b");
				}
				else if (j == 0 && ch == 8) {
					user[j] = '\0';
					printf(" \b");
				}
				else {
					user[j] = ch;
					j++;
				}

			}

			if (time(0) - s_time > TIME_EVENT) {
				setColor(12);
				printf("\n�ð��ʰ�\n\n");
				setColor(15);
				time_flag++;
				break;
			}

		}
		if (!strcmp(arr, user) && time_flag == 0) // ���� ��
		{
			setColor(9);
			printf("	O\n");
			Sleep(2000);
			setColor(15);
			return 1;//���� �� 1 ����
		}

		else if (strcmp(arr, user) && time_flag == 0) {
			setColor(12);
			printf("	X\n");
			Sleep(2000);
			setColor(15);
			return 0;//���� ���� �� 0 ����	
		}
	}

	else if (x == 2) {//�߱�(Ʈ��)�ܰ�
		for (i = 0; i < 9; i++) {
			arr[i] = 'a' + rand() % 26;
			printf("%c", arr[i]);
		}
		printf("\n________\b\b\b\b\b\b\b\b\b");

		while (1) {

			if (_kbhit()) {

				ch = _getch();
				printf("%c", ch);

				if (ch == 13)
					break;

				if (j > 0 && ch == 8) {
					user[j] = '\0';
					user[j - 1] = '\0';
					j--;
					printf(" \b");
				}

				else {
					user[j] = ch;
					j++;
				}

			}

			if (time(0) - s_time > TIME_EVENT) {
				setColor(12);
				printf("\n�ð��ʰ�\n\n");
				setColor(15);
				time_flag++;
				break;
			}

		}

		if (!strcmp(arr, user) && time_flag == 0) // ���� ��
		{
			setColor(9);
			printf("	O\n");
			Sleep(2000);
			setColor(15);
			return 1;//���� �� 1 ����
		}

		else if (strcmp(arr, user) && time_flag == 0) {
			setColor(12);
			printf("	X\n");
			Sleep(2000);
			setColor(15);
			return 0;//���� ���� �� 0 ����	
		}
	}

	else { //���(��)�ܰ�

		for (i = 0; i < 12; i++) {
			arr[i] = 'a' + rand() % 26;
			printf("%c", arr[i]);
		}
		printf("\n____________\b\b\b\b\b\b\b\b\b\b\b\b");

		while (1) {

			if (_kbhit()) {

				ch = _getch();
				printf("%c", ch);

				if (ch == 13)
					break;

				if (j > 0 && ch == 8) {
					user[j] = '\0';
					user[j - 1] = '\0';
					j--;
					printf(" \b");
				}

				else {
					user[j] = ch;
					j++;
				}

			}

			if (time(0) - s_time > TIME_EVENT) {
				setColor(12);
				printf("\n�ð��ʰ�\n\n");
				setColor(15);
				time_flag++;
				break;
			}

		}

		if (!strcmp(arr, user) && time_flag == 0) // ���� ��
		{
			setColor(9);
			printf("	O\n");
			Sleep(2000);
			setColor(15);
			return 1;//���� �� 1 ����
		}

		else if (strcmp(arr, user) && time_flag == 0) {
			setColor(12);
			printf("	X\n");
			Sleep(2000);
			setColor(15);
			return 0;//���� ���� �� 0 ����	
		}
	}

}