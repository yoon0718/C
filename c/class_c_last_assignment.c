#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>

void print(int arr[10][10]);
void printting(int arr[10][10]);



void main() {
	printf("ù �и� �̵�Ƚ�� �� �и� �̵� ��, �ڵ� �̵������ �̵��ӵ��� ���� Enter�� �����ּ���.");
	int m_t = 0;
	int r_t = 0;
	int speed = 0;
	int countm_t = 0;
	int countr_t = 0;
	int key = 0; // ����Ű����
	scanf_s("%d %d %d", &m_t, &r_t, &speed);
	system("cls");
	srand(time(NULL));
	int map[10][10] = { 1, 1, 0, 1, 1, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 1, 1, 1, 0,
						0, 1, 1, 1, 1, 0, 1, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 1, 0, 0, 1,
						0, 1, 1, 0, 1, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 1, 1, 1, 1, 0, 1, 0, 1, 0,
						0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
						0, 1, 1, 0, 1, 0, 1, 0, 1, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int hdx = rand() % 10;   // ����, ��, �����ѻ��, ���� ��ǥ
	int hdy = rand() % 10;
	int pdx = 0;
	int pdy = 0;
	int mx = 0;
	int my = 0;
	int oxo = rand() % 10;
	int oyo = rand() % 10;
	int oxt = rand() % 10;
	int oyt = rand() % 10;
	while (map[oyo][oxo] == 0 || map[oyt][oxt] == 0) {
		oxo = rand() % 10;
		oyo = rand() % 10;
		oxt = rand() % 10;
		oyt = rand() % 10;
	}
	int oocheck = 0; // ������ ���Դ��� �ȳ��Դ��� Ȯ���ϱ� ����
	int otcheck = 0;
	int countm_tt = 0;

	int moveUser = 0; // �ڵ����� �������� �������� �������� 
	int move = 1; // �ڵ�������

	int checkpointOne = 0;
	int pointer = 0;
	while (map[hdy][hdx] == 1 || map[pdy][pdx] == 1) { // home�� porterhouse�� ���� ��ȯ�� �� ���� �������� �ʱ� ����
		hdx = rand() % 10;
		hdy = rand() % 10;
		if (hdx < 5 && hdy < 5) { // home�� 1��и��϶� porterhouse�� 4��и�
			pdx = rand() % 5 + 5;
			pdy = rand() % 5 + 5;
			pointer = 4;

		}
		else if (hdx >= 5 && hdy < 5) { // home�� 2��и��϶� porterhouse�� 3��и�
			pdx = rand() % 5;
			pdy = rand() % 5 + 5;
			pointer = 3;
		}
		else if (hdx < 5 && hdy >= 5) { // home�� 3��и��϶� porterhouse�� 2��и�
			pdx = rand() % 5 + 5;
			pdy = rand() % 5;
			pointer = 2;
		}
		else if (hdx >= 5 && hdy >= 5) { // home�� 4��и��϶� porterhouse�� 1��и�
			pdx = rand() % 5;
			pdy = rand() % 5;
			pointer = 1;

		}
	}
	mx = pdx; my = pdy;
	while (1) {
		// ����������
		while (moveUser) {
			map[hdy][hdx] = 2; map[pdy][pdx] = 3; map[my][mx] = 4;
			print(map);
			printf("\n%d", countr_t);
			printting(map);
			int search = 0; // �и�Ȯ�ο뵵
			if (my < 5 && mx < 5) {
				search = 1;
			}
			else if (my < 5 && mx > 4) {
				search = 2;
			}
			else if (my > 4 && mx < 5) {
				search = 3;
			}
			else if (my > 4 && mx > 4) {
				search = 4;
			}

			countm_t = 0;
			key = _getch();
			switch (key) {
			case 72: // ��
				if (my > 0 && (map[my - 1][mx] == 0 || map[my - 1][mx] == 2 || map[my - 1][mx] == 3 || map[my - 1][mx] == 7)) { // ��, ����, ��, �׸��� ������ �и� �Ѿ������
					map[my][mx] = 0;
					my -= 1;
					countr_t++;
					if (search == 1) {
						if (my < 5 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (my > 4 && countr_t <= r_t || countr_t > r_t) {
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						

					}
					else if (search == 2) {
						if (my < 5 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (my > 4 && countr_t <= r_t || countr_t > r_t) {
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
					else if (search == 3) {
						if (my > 4 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (my < 5 && countr_t <= r_t || countr_t > r_t) {
							
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
					else if (search == 4) {
						if (my > 4 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (my < 5 && countr_t <= r_t || countr_t > r_t) {
							
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
				}
				break;
			case 80: // ��
				if (my < 9 && (map[my + 1][mx] == 0 || map[my + 1][mx] == 2 || map[my + 1][mx] == 3 || map[my + 1][mx] == 7)) {
					map[my][mx] = 0;
					my += 1;
					countr_t++;
					if (search == 1) {
						if (my < 5 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (my > 4 && countr_t <= r_t) {
							
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
					else if (search == 2) {
						if (my < 5 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (my > 4 && countr_t <= r_t || countr_t > r_t) {
							
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
					else if (search == 3) {
						if (my > 4 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (my < 5 && countr_t <= r_t || countr_t > r_t) {
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
					else if (search == 4) {
						if (my > 4 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (my < 5 && countr_t <= r_t || countr_t > r_t) {
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
				}
				break;
			case 75: // ��
				if (mx > 0 && (map[my][mx - 1] == 0 || map[my][mx - 1] == 2 || map[my][mx - 1] == 3 || map[my][mx - 1] == 7)) {
					map[my][mx] = 0;
					mx -= 1;
					countr_t++;
					if (search == 1) {
						if (mx < 5 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (mx > 4 && countr_t <= r_t || countr_t > r_t) {
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						

					}
					else if (search == 2) {
						if (mx > 4 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (mx < 5 && countr_t <= r_t || countr_t > r_t) {
							
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
					else if (search == 3) {
						if (mx < 5 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (mx > 4 && countr_t <= r_t || countr_t > r_t) {
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
					else if (search == 4) {
						if (mx > 4 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (mx < 5 && countr_t <= r_t || countr_t > r_t) {
							
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
				}
				break;
			case 77: // ��
				if (mx < 9 && (map[my][mx + 1] == 0 || map[my][mx + 1] == 2 || map[my][mx + 1] == 3) || map[my][mx + 1] == 7) {
					map[my][mx] = 0;
					mx += 1;
					countr_t++;
					if (search == 1) {
						if (mx < 5 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (mx > 4 && countr_t <= r_t || countr_t > r_t) {
							
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
					else if (search == 2) {
						if (mx > 4 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (mx < 5 && countr_t <= r_t || countr_t > r_t) {
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
					else if (search == 3) {
						if (mx < 5 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (mx > 4 && countr_t <= r_t || countr_t > r_t) {
							for (int i = 0; i < 5; i++) {
								for (int j = 5; j < 10; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
					else if (search == 4) {
						if (mx > 4 && countr_t >= r_t) {
							countr_t = 0;
							system("PAUSE");
						}
						else if (mx < 5 && countr_t <= r_t || countr_t > r_t) {
							countr_t = 0;
							moveUser = 0;
							move = 1;
						}
						
					}
				}
				break;
			default:
				break;
			}
			system("cls");

		}

		while (move) {
			map[hdy][hdx] = 2; map[pdy][pdx] = 3; map[my][mx] = 4;
			int mancoin;

			print(map);
			printf("\n%d %d\n", countm_t, checkpointOne);
			printting(map);
			Sleep(speed);
			system("cls");
			// �������� �Ѿ�Դ� �и� �Ѿ�ͼ� �ڵ����� ������ �� �ְ� ���ִ� �κ�
			if (my < 5 && mx < 5) {
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						if (map[j][i] == 7) {
							map[j][i] = 0;
						}
					}
				}
			}
			else if (my < 5 && mx > 4) {
				for (int i = 5; i < 10; i++) {
					for (int j = 0; j < 5; j++) {
						if (map[j][i] == 7) {
							map[j][i] = 0;
						}
					}
				}
			}
			else if (my > 4 && mx < 5) {
				for (int i = 0; i < 5; i++) {
					for (int j = 5; j < 10; j++) {
						if (map[j][i] == 7) {
							map[j][i] = 0;
						}
					}
				}
			}
			else if (my > 4 && mx > 4) {
				for (int i = 5; i < 10; i++) {
					for (int j = 5; j < 10; j++) {
						if (map[j][i] == 7) {
							map[j][i] = 0;
						}
					}
				}
			}

			if (my < 5 && mx < 5) {
				checkpointOne = 1;
			}
			else if (my < 5 && mx > 4) {
				checkpointOne = 2;
			}
			else if (my > 4 && mx < 5) {
				checkpointOne = 3;
			}
			else if (my > 4 && mx > 4) {
				checkpointOne = 4;
			}

			if (checkpointOne == 1) { // 1��и�
				mancoin = rand() % 4;
				if (mancoin == 0 && my > 0 && (map[my - 1][mx] == 0 || map[my - 1][mx] == 2 || map[my - 1][mx] == 3)) { //��
					map[my][mx] = 0;
					my -= 1;
					countm_t++;

				}
				else if (mancoin == 1 && my < 5 && (map[my + 1][mx] == 0 || map[my + 1][mx] == 2 || map[my + 1][mx] == 3)) { //��
					map[my][mx] = 0;
					my += 1;
					countm_t++;
					if (my > 4) {
						if (pointer == 1) {
							for (int i = 0; i < 5; i++) {
								for (int j = 0; j < 5; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 1) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5 + 5;
								oxo = rand() % 5;
							}
							oocheck = 1;
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 4) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5 + 5;
								oxo = rand() % 5;
							}
							oocheck = 1;
						}
						if (pointer == 2) {
							for (int i = 0; i < 5; i++) {
								for (int j = 0; j < 5; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						countm_tt = countm_t;
						countm_t = 0;
					}
				}
				else if (mancoin == 2 && mx > 0 && (map[my][mx - 1] == 0 || map[my][mx - 1] == 2 || map[my][mx - 1] == 3)) { //��
					map[my][mx] = 0;
					mx -= 1;
					countm_t++;
				}
				else if (mancoin == 3 && mx < 5 && (map[my][mx + 1] == 0 || map[my][mx + 1] == 2 || map[my][mx + 1] == 3)) { //��
					map[my][mx] = 0;
					mx += 1;
					countm_t++;
					if (mx > 4) {
						if (pointer == 1) {
							for (int i = 0; i < 5; i++) {
								for (int j = 0; j < 5; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						
						if (oocheck == 0 && countm_t > m_t && pointer == 1) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5;
								oxo = rand() % 5 + 5;
							}
							oocheck = 1;

						}
						if (oocheck == 0 && countm_t > m_t && pointer == 4) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5;
								oxo = rand() % 5 + 5;
							}
							oocheck = 1;

						}
						if (pointer == 3) {
							for (int i = 0; i < 5; i++) {
								for (int j = 0; j < 5; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						countm_tt = countm_t;
						countm_t = 0;
					}
				}
			}
			else if (checkpointOne == 2) { // 2��и�
				mancoin = rand() % 4;
				if (mancoin == 0 && my > 0 && (map[my - 1][mx] == 0 || map[my - 1][mx] == 2 || map[my - 1][mx] == 3)) { //��
					map[my][mx] = 0;
					my -= 1;
					countm_t++;
				}
				else if (mancoin == 1 && my < 5 && (map[my + 1][mx] == 0 || map[my + 1][mx] == 2 || map[my + 1][mx] == 3)) { //��
					map[my][mx] = 0;
					my += 1;
					countm_t++;
					if (my > 4) {
						if (pointer == 2) {
							for (int i = 5; i < 10; i++) {
								for (int j = 0; j < 5; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						
						if (oocheck == 0 && countm_t > m_t && pointer == 2) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5 + 5;
								oxo = rand() % 5 + 5;
							}
							oocheck = 1;
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 3) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5 + 5;
								oxo = rand() % 5 + 5;
							}
							oocheck = 1;
						}
						if (pointer == 1) {
							for (int i = 5; i < 10; i++) {
								for (int j = 0; j < 5; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						
						countm_tt = countm_t;
						countm_t = 0;
					}
				}
				else if (mancoin == 2 && mx > 4 && (map[my][mx - 1] == 0 || map[my][mx - 1] == 2 || map[my][mx - 1] == 3)) { //��
					map[my][mx] = 0;
					mx -= 1;
					countm_t++;
					if (mx < 5) {
						if (pointer == 2) {
							for (int i = 5; i < 10; i++) {
								for (int j = 0; j < 5; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 2) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5;
								oxo = rand() % 5;
							}
							oocheck = 1;
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 3) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5;
								oxo = rand() % 5;
							}
							oocheck = 1;
						}
						if (pointer == 4) {
							for (int i = 5; i < 10; i++) {
								for (int j = 0; j < 5; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						countm_tt = countm_t;
						countm_t = 0;
					}
				}
				else if (mancoin == 3 && mx < 9 && (map[my][mx + 1] == 0 || map[my][mx + 1] == 2 || map[my][mx + 1] == 3)) { //��
					map[my][mx] = 0;
					mx += 1;
					countm_t++;
				}
			}
			else if (checkpointOne == 3) { // 3��и�
				mancoin = rand() % 4;
				if (mancoin == 0 && my > 4 && (map[my - 1][mx] == 0 || map[my - 1][mx] == 2 || map[my - 1][mx] == 3)) { //��
					map[my][mx] = 0;
					my -= 1;
					countm_t++;
					if (my < 5) {
						if (pointer == 3) {
							for (int i = 0; i < 5; i++) {
								for (int j = 5; j < 10; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						
						if (oocheck == 0 && countm_t > m_t && pointer == 3) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5;
								oxo = rand() % 5;
							}
							oocheck = 1;
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 2) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5;
								oxo = rand() % 5;
							}
							oocheck = 1;
						}
						if (pointer == 4) {
							for (int i = 0; i < 5; i++) {
								for (int j = 5; j < 10; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						countm_tt = countm_t;
						countm_t = 0;
					}
				}
				else if (mancoin == 1 && my < 9 && (map[my + 1][mx] == 0 || map[my + 1][mx] == 2 || map[my + 1][mx] == 3)) { //��
					map[my][mx] = 0;
					my += 1;
					countm_t++;
				}
				else if (mancoin == 2 && mx > 0 && (map[my][mx - 1] == 0 || map[my][mx - 1] == 2 || map[my][mx - 1] == 3)) { //��
					map[my][mx] = 0;
					mx -= 1;
					countm_t++;

				}
				else if (mancoin == 3 && mx < 5 && (map[my][mx + 1] == 0 || map[my][mx + 1] == 2 || map[my][mx + 1] == 3)) { //��
					map[my][mx] = 0;
					mx += 1;
					countm_t++;
					if (mx > 4) {
						if (pointer == 3) {
							for (int i = 0; i < 5; i++) {
								for (int j = 5; j < 10; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 3) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5 + 5;
								oxo = rand() % 5 + 5;
							}
							oocheck = 1;
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 2) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5 + 5;
								oxo = rand() % 5 + 5;
							}
							oocheck = 1;
						}
						if (pointer == 1) {
							for (int i = 0; i < 5; i++) {
								for (int j = 5; j < 10; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						countm_tt = countm_t;
						countm_t = 0;
					}
				}
			}
			else if (checkpointOne == 4) { // 4��и�
				mancoin = rand() % 4;
				if (mancoin == 0 && my > 4 && (map[my - 1][mx] == 0 || map[my - 1][mx] == 2 || map[my - 1][mx] == 3)) { //��
					map[my][mx] = 0;
					my -= 1;
					countm_t++;
					if (my < 5) {
						if (pointer == 4) {
							for (int i = 5; i < 10; i++) {
								for (int j = 5; j < 10; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						
						if (oocheck == 0 && countm_t > m_t && pointer == 1) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5;
								oxo = rand() % 5 + 5;
							}
							oocheck = 1;
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 4) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5;
								oxo = rand() % 5 + 5;
							}
							oocheck = 1;
						}
						if (pointer == 3) {
							for (int i = 5; i < 10; i++) {
								for (int j = 5; j < 10; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						countm_tt = countm_t;
						countm_t = 0;
					}
				}
				else if (mancoin == 1 && my < 9 && (map[my + 1][mx] == 0 || map[my + 1][mx] == 2 || map[my + 1][mx] == 3)) { //��
					map[my][mx] = 0;
					my += 1;
					countm_t++;
				}
				else if (mancoin == 2 && mx > 4 && (map[my][mx - 1] == 0 || map[my][mx - 1] == 2 || map[my][mx - 1] == 3)) { //��
					map[my][mx] = 0;
					mx -= 1;
					countm_t++;
					if (mx < 5) {
						if (pointer == 4) {
							for (int i = 5; i < 10; i++) {
								for (int j = 5; j < 10; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 1) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5 + 5;
								oxo = rand() % 5;
							}
							oocheck = 1;
						}
						if (oocheck == 0 && countm_t > m_t && pointer == 4) {

							while (map[oyo][oxo] == 1) {
								oyo = rand() % 5 + 5;
								oxo = rand() % 5;
							}
							oocheck = 1;
						}
						if (pointer == 2) {
							for (int i = 5; i < 10; i++) {
								for (int j = 5; j < 10; j++) {
									if (map[j][i] == 0)map[j][i] = 7;
								}
							}
						}
						countm_tt = countm_t;
						countm_t = 0;
					}
				}
				else if (mancoin == 3 && mx < 9 && (map[my][mx + 1] == 0 || map[my][mx + 1] == 2 || map[my][mx + 1] == 3)) { //��
					map[my][mx] = 0;
					mx += 1;
					countm_t++;
				}
			}

			//  ù ������ ���� �ι�° ���� ��ǥ
			if (oocheck == 1) {
				while (map[oyt][oxt] == 1) {
					if (oyo < 5 && oxo < 5) {
						oyt = rand() % 5 + 5;
						oxt = rand() % 5 + 5;
					}
					else if (oyo < 5 && oxo > 4) {
						oyt = rand() % 5 + 5;
						oxt = rand() % 5;
					}
					else if (oyo > 4 && oxo < 5) {
						oyt = rand() % 5;
						oxt = rand() % 5 + 5;
					}
					else if (oyo > 4 && oxo > 4) {
						oyt = rand() % 5;
						oxt = rand() % 5;
					}
				}
			}
			if (oocheck == 1 && countm_tt > m_t && oyo < 5 && oxo < 5 && mx > 4 && my > 4) {
				otcheck = 1;
			}
			else if(oocheck == 1 && countm_tt > m_t && oyo < 5 && oxo > 4 && mx < 5 && my > 4) {
				otcheck = 1;
			}
			else if (oocheck == 1 && countm_tt > m_t && oyo > 4 && oxo < 5 && mx > 4 && my < 5) {
				otcheck = 1;
			}
			else if (oocheck == 1 && countm_tt > m_t && oyo > 4 && oxo > 4 && mx < 5 && my < 5) {
				otcheck = 1;
			}

			








			// ���� ���� ������
			if (oocheck == 1) {
				int policeCoin = rand() % 4 + 1;
				if (oyo < 5 && oxo < 5) {
					if (policeCoin == 1 && oyo > 0 && (map[oyo - 1][oxo] == 0 || map[oyo - 1][oxo] == 2 || map[oyo - 1][oxo] == 3 || map[oyo - 1][oxo] == 7)) { //��
						if (map[oyo - 1][oxo] == 0)map[oyo][oxo] = 0;
						else if (map[oyo - 1][oxo] == 7)map[oyo][oxo] = 7;
						oyo -= 1;
					}
					else if (policeCoin == 2 && oyo < 4 && (map[oyo + 1][oxo] == 0 || map[oyo + 1][oxo] == 2 || map[oyo + 1][oxo] == 3 || map[oyo + 1][oxo] == 7)) { //��
						if (map[oyo + 1][oxo] == 0)map[oyo][oxo] = 0;
						else if (map[oyo + 1][oxo] == 7)map[oyo][oxo] = 7;
						oyo += 1;
					}
					else if (policeCoin == 3 && oxo > 0 && (map[oyo][oxo - 1] == 0 || map[oyo][oxo - 1] == 2 || map[oyo][oxo - 1] == 3 || map[oyo][oxo - 1] == 7)) { //��
						if (map[oyo][oxo - 1] == 0)map[oyo][oxo] = 0;
						else if (map[oyo][oxo - 1] == 7)map[oyo][oxo] = 7;
						oxo -= 1;
					}
					else if (policeCoin == 4 && oxo < 4 && (map[oyo][oxo + 1] == 0 || map[oyo][oxo + 1] == 2 || map[oyo][oxo + 1] == 3 || map[oyo][oxo + 1] == 7)) { //��
						if (map[oyo][oxo + 1] == 0)map[oyo][oxo] = 0;
						else if (map[oyo][oxo + 1] == 7)map[oyo][oxo] = 7;
						oxo += 1;
					}
					map[oyo][oxo] = 5;
				}
				else if (oyo < 5 && oxo > 4) {
					if (policeCoin == 1 && oyo > 0 && (map[oyo - 1][oxo] == 0 || map[oyo - 1][oxo] == 2 || map[oyo - 1][oxo] == 3 || map[oyo - 1][oxo] == 7)) { //��
						if (map[oyo - 1][oxo] == 0)map[oyo][oxo] = 0;
						else if (map[oyo - 1][oxo] == 7)map[oyo][oxo] = 7;
						oyo -= 1;
					}
					else if (policeCoin == 2 && oyo < 4 && (map[oyo + 1][oxo] == 0 || map[oyo + 1][oxo] == 2 || map[oyo + 1][oxo] == 3 || map[oyo + 1][oxo] == 7)) { //��
						if (map[oyo + 1][oxo] == 0)map[oyo][oxo] = 0;
						else if (map[oyo + 1][oxo] == 7)map[oyo][oxo] = 7;
						oyo += 1;
					}
					else if (policeCoin == 3 && oxo > 5 && (map[oyo][oxo - 1] == 0 || map[oyo][oxo - 1] == 2 || map[oyo][oxo - 1] == 3 || map[oyo][oxo - 1] == 7)) { //��
						if (map[oyo][oxo - 1] == 0)map[oyo][oxo] = 0;
						else if (map[oyo][oxo - 1] == 7)map[oyo][oxo] = 7;
						oxo -= 1;
					}
					else if (policeCoin == 4 && oxo < 9 && (map[oyo][oxo + 1] == 0 || map[oyo][oxo + 1] == 2 || map[oyo][oxo + 1] == 3 || map[oyo][oxo + 1] == 7)) { //��
						if (map[oyo][oxo + 1] == 0)map[oyo][oxo] = 0;
						else if (map[oyo][oxo + 1] == 7)map[oyo][oxo] = 7;
						oxo += 1;
					}
					map[oyo][oxo] = 5;
				}
				else if (oyo > 4 && oxo < 5) {
					if (policeCoin == 1 && oyo > 5 && (map[oyo - 1][oxo] == 0 || map[oyo - 1][oxo] == 2 || map[oyo - 1][oxo] == 3 || map[oyo - 1][oxo] == 7)) { //��
						if (map[oyo - 1][oxo] == 0)map[oyo][oxo] = 0;
						else if (map[oyo - 1][oxo] == 7)map[oyo][oxo] = 7;
						oyo -= 1;
					}
					else if (policeCoin == 2 && oyo < 9 && (map[oyo + 1][oxo] == 0 || map[oyo + 1][oxo] == 2 || map[oyo + 1][oxo] == 3 || map[oyo + 1][oxo] == 7)) { //��
						if (map[oyo + 1][oxo] == 0)map[oyo][oxo] = 0;
						else if (map[oyo + 1][oxo] == 7)map[oyo][oxo] = 7;
						oyo += 1;
					}
					else if (policeCoin == 3 && oxo > 0 && (map[oyo][oxo - 1] == 0 || map[oyo][oxo - 1] == 2 || map[oyo][oxo - 1] == 3 || map[oyo][oxo - 1] == 7)) { //��
						if (map[oyo][oxo - 1] == 0)map[oyo][oxo] = 0;
						else if (map[oyo][oxo - 1] == 7)map[oyo][oxo] = 7;
						oxo -= 1;
					}
					else if (policeCoin == 4 && oxo < 4 && (map[oyo][oxo + 1] == 0 || map[oyo][oxo + 1] == 2 || map[oyo][oxo + 1] == 3 || map[oyo][oxo + 1] == 7)) { //��
						if (map[oyo][oxo + 1] == 0)map[oyo][oxo] = 0;
						else if (map[oyo][oxo + 1] == 7)map[oyo][oxo] = 7;
						oxo += 1;
					}
					map[oyo][oxo] = 5;
				}
				else if (oyo > 4 && oxo > 4) {
					if (policeCoin == 1 && oyo > 5 && (map[oyo - 1][oxo] == 0 || map[oyo - 1][oxo] == 2 || map[oyo - 1][oxo] == 3 || map[oyo - 1][oxo] == 7)) { //��
						if (map[oyo - 1][oxo] == 0)map[oyo][oxo] = 0;
						else if (map[oyo - 1][oxo] == 7)map[oyo][oxo] = 7;
						oyo -= 1;
					}
					else if (policeCoin == 2 && oyo < 9 && (map[oyo + 1][oxo] == 0 || map[oyo + 1][oxo] == 2 || map[oyo + 1][oxo] == 3 || map[oyo + 1][oxo] == 7)) { //��
						if (map[oyo + 1][oxo] == 0)map[oyo][oxo] = 0;
						else if (map[oyo + 1][oxo] == 7)map[oyo][oxo] = 7;
						oyo += 1;
					}
					else if (policeCoin == 3 && oxo > 5 && (map[oyo][oxo - 1] == 0 || map[oyo][oxo - 1] == 2 || map[oyo][oxo - 1] == 3 || map[oyo][oxo - 1] == 7)) { //��
						if (map[oyo][oxo - 1] == 0)map[oyo][oxo] = 0;
						else if (map[oyo][oxo - 1] == 7)map[oyo][oxo] = 7;
						oxo -= 1;
					}
					else if (policeCoin == 4 && oxo < 9 && (map[oyo][oxo + 1] == 0 || map[oyo][oxo + 1] == 2 || map[oyo][oxo + 1] == 3 || map[oyo][oxo + 1] == 7)) { //��
						if (map[oyo][oxo + 1] == 0)map[oyo][oxo] = 0;
						else if (map[oyo][oxo + 1] == 7)map[oyo][oxo] = 7;
						oxo += 1;
					}
					map[oyo][oxo] = 5;
				}
			}

			// �ι�° ���� ���� ������
			if (otcheck == 1) {
				int policeCoint = rand() % 4 + 1;
				if (oyt < 5 && oxt < 5) {
					if (policeCoint == 1 && oyt > 0 && (map[oyt - 1][oxt] == 0 || map[oyt - 1][oxt] == 2 || map[oyt - 1][oxt] == 3 || map[oyt - 1][oxt] == 7)) { //��
						if (map[oyt - 1][oxt] == 0)map[oyt][oxt] = 0;
						else if (map[oyt - 1][oxt] == 7)map[oyt][oxt] = 7;
						oyt -= 1;
					}
					else if (policeCoint == 2 && oyt < 4 && (map[oyt + 1][oxt] == 0 || map[oyt + 1][oxt] == 2 || map[oyt + 1][oxt] == 3 || map[oyt + 1][oxt] == 7)) { //��
						if (map[oyt + 1][oxt] == 0)map[oyt][oxt] = 0;
						else if (map[oyt + 1][oxt] == 7)map[oyt][oxt] = 7;
						oyt += 1;
					}
					else if (policeCoint == 3 && oxt > 0 && (map[oyt][oxt - 1] == 0 || map[oyt][oxt - 1] == 2 || map[oyt][oxt - 1] == 3 || map[oyt][oxt - 1] == 7)) { //��
						if (map[oyt][oxt - 1] == 0)map[oyt][oxt] = 0;
						else if (map[oyt][oxt - 1] == 7)map[oyt][oxt] = 7;
						oxt -= 1;
					}
					else if (policeCoint == 4 && oxt < 4 && (map[oyt][oxt + 1] == 0 || map[oyt][oxt + 1] == 2 || map[oyt][oxt + 1] == 3 || map[oyt][oxt + 1] == 7)) { //��
						if (map[oyt][oxt + 1] == 0)map[oyt][oxt] = 0;
						else if (map[oyt][oxt + 1] == 7)map[oyt][oxt] = 7;
						oxt += 1;
					}
					map[oyt][oxt] = 6;
				}
				else if (oyt < 5 && oxt > 4) {
					if (policeCoint == 1 && oyt > 0 && (map[oyt - 1][oxt] == 0 || map[oyt - 1][oxt] == 2 || map[oyt - 1][oxt] == 3 || map[oyt - 1][oxt] == 7)) { //��
						if (map[oyt - 1][oxt] == 0)map[oyt][oxt] = 0;
						else if (map[oyt - 1][oxt] == 7)map[oyt][oxt] = 7;
						oyt -= 1;
					}
					else if (policeCoint == 2 && oyt < 4 && (map[oyt + 1][oxt] == 0 || map[oyt + 1][oxt] == 2 || map[oyt + 1][oxt] == 3 || map[oyt + 1][oxt] == 7)) { //��
						if (map[oyt + 1][oxt] == 0)map[oyt][oxt] = 0;
						else if (map[oyt + 1][oxt] == 7)map[oyt][oxt] = 7;
						oyt += 1;
					}
					else if (policeCoint == 3 && oxt > 5 && (map[oyt][oxt - 1] == 0 || map[oyt][oxt - 1] == 2 || map[oyt][oxt - 1] == 3 || map[oyt][oxt - 1] == 7)) { //��
						if (map[oyt][oxt - 1] == 0)map[oyt][oxt] = 0;
						else if (map[oyt][oxt - 1] == 7)map[oyt][oxt] = 7;
						oxt -= 1;
					}
					else if (policeCoint == 4 && oxt < 9 && (map[oyt][oxt + 1] == 0 || map[oyt][oxt + 1] == 2 || map[oyt][oxt + 1] == 3 || map[oyt][oxt + 1] == 7)) { //��
						if (map[oyt][oxt + 1] == 0)map[oyt][oxt] = 0;
						else if (map[oyt][oxt + 1] == 7)map[oyt][oxt] = 7;
						oxt += 1;
					}
					map[oyt][oxt] = 6;
				}
				else if (oyt > 4 && oxt < 5) {
					if (policeCoint == 1 && oyt > 5 && (map[oyt - 1][oxt] == 0 || map[oyt - 1][oxt] == 2 || map[oyt - 1][oxt] == 3 || map[oyt - 1][oxt] == 7)) { //��
						if (map[oyt - 1][oxt] == 0)map[oyt][oxt] = 0;
						else if (map[oyt - 1][oxt] == 7)map[oyt][oxt] = 7;
						oyt -= 1;
					}
					else if (policeCoint == 2 && oyt < 9 && (map[oyt + 1][oxt] == 0 || map[oyt + 1][oxt] == 2 || map[oyt + 1][oxt] == 3 || map[oyt + 1][oxt] == 7)) { //��
						if (map[oyt + 1][oxt] == 0)map[oyt][oxt] = 0;
						else if (map[oyt + 1][oxt] == 7)map[oyt][oxt] = 7;
						oyt += 1;
					}
					else if (policeCoint == 3 && oxt > 0 && (map[oyt][oxt - 1] == 0 || map[oyt][oxt - 1] == 2 || map[oyt][oxt - 1] == 3 || map[oyt][oxt - 1] == 7)) { //��
						if (map[oyt][oxt - 1] == 0)map[oyt][oxt] = 0;
						else if (map[oyt][oxt - 1] == 7)map[oyt][oxt] = 7;
						oxt -= 1;
					}
					else if (policeCoint == 4 && oxt < 4 && (map[oyt][oxt + 1] == 0 || map[oyt][oxt + 1] == 2 || map[oyt][oxt + 1] == 3 || map[oyt][oxt + 1] == 7)) { //��
						if (map[oyt][oxt + 1] == 0)map[oyt][oxt] = 0;
						else if (map[oyt][oxt + 1] == 7)map[oyt][oxt] = 7;
						oxt += 1;
					}
					map[oyt][oxt] = 6;
				}
				else if (oyt > 4 && oxt > 4) {
					if (policeCoint == 1 && oyt > 5 && (map[oyt - 1][oxt] == 0 || map[oyt - 1][oxt] == 2 || map[oyt - 1][oxt] == 3 || map[oyt - 1][oxt] == 7)) { //��
						if (map[oyt - 1][oxt] == 0)map[oyt][oxt] = 0;
						else if (map[oyt - 1][oxt] == 7)map[oyt][oxt] = 7;
						oyt -= 1;
					}
					else if (policeCoint == 2 && oyt < 9 && (map[oyt + 1][oxt] == 0 || map[oyt + 1][oxt] == 2 || map[oyt + 1][oxt] == 3 || map[oyt + 1][oxt] == 7)) { //��
						if (map[oyt + 1][oxt] == 0)map[oyt][oxt] = 0;
						else if (map[oyt + 1][oxt] == 7)map[oyt][oxt] = 7;
						oyt += 1;
					}
					else if (policeCoint == 3 && oxt > 5 && (map[oyt][oxt - 1] == 0 || map[oyt][oxt - 1] == 2 || map[oyt][oxt - 1] == 3 || map[oyt][oxt - 1] == 7)) { //��
						if (map[oyt][oxt - 1] == 0)map[oyt][oxt] = 0;
						else if (map[oyt][oxt - 1] == 7)map[oyt][oxt] = 7;
						oxt -= 1;
					}
					else if (policeCoint == 4 && oxt < 9 && (map[oyt][oxt + 1] == 0 || map[oyt][oxt + 1] == 2 || map[oyt][oxt + 1] == 3 || map[oyt][oxt + 1] == 7)) { //��
						if (map[oyt][oxt + 1] == 0)map[oyt][oxt] = 0;
						else if (map[oyt][oxt + 1] == 7)map[oyt][oxt] = 7;
						oxt += 1;
					}
					map[oyt][oxt] = 6;
				}


			}

			// �������� �߰��Ǵ� �κ�(�߰��� ���� ������ �߰� X)
			int wallcheck = 0;
			if ((oyo < 5 && oxo < 5 && my < 5 && mx < 5) || (oyo < 5 && oxo > 4 && my < 5 && mx > 4) || (oyo > 4 && oxo < 5 && my > 4 && mx < 5) || (oyo > 4 && oxo > 4 && my > 4 && mx > 4)) {
				if (oyo == my && oocheck == 1) { // �߰�
					if (oxo > mx) {
						for (int i = 0; i < 10; i++) {
							if (i > mx && i < oxo) {
								if (map[oyo][i] == 1) {
									wallcheck = 1;
								}
							}
							else if ((oxo - 1) == mx) {
								move = 0;
								moveUser = 1;
							}
						}
						if (wallcheck == 0) {
							move = 0;
							moveUser = 1;
						}
					}
					else if (mx > oxo) {
						for (int i = 0; i < 10; i++) {
							if (i < mx && i > oxo) {
								if (map[oyo][i] == 1) {
									wallcheck = 1;
								}
							}
							else if (oxo == (mx - 1)) {
								move = 0;
								moveUser = 1;

							}
						}
						if (wallcheck == 0) {
							move = 0;
							moveUser = 1;
						}
					}
				}
				else if (oxo == mx && oocheck == 1) {
					if (oyo > my) {
						for (int i = 0; i < 10; i++) {
							if (i > my && i < oyo) {
								if (map[i][oxo] == 1) {
									wallcheck = 1;
								}
							}
							else if ((oyo - 1) == my) {
								move = 0;
								moveUser = 1;
							}
						}
						if (wallcheck == 0) {
							move = 0;
							moveUser = 1;
						}
					}
					else if (my > oyo) {
						for (int i = 0; i < 10; i++) {
							if (i < my && i > oyo) {
								if (map[i][oxo] == 1) {
									wallcheck = 1;
								}
							}
							else if (oyo == (my - 1)) {
								move = 0;
								moveUser = 1;
							}
						}
						if (wallcheck == 0) {
							move = 0;
							moveUser = 1;
						}
					}
				}
			}
			if ((oyt < 5 && oxt < 5 && my < 5 && mx < 5) || (oyt < 5 && oxt > 4 && my < 5 && mx > 4) || (oyt > 4 && oxt < 5 && my > 4 && mx < 5) || (oyt > 4 && oxt > 4 && my > 4 && mx > 4)) {
				if (oyt == my && otcheck == 1) {
					if (oxt > mx) {
						for (int i = 0; i < 10; i++) {
							if (i > mx && i < oxt) {
								if (map[oyt][i] == 1) {
									wallcheck = 1;
								}
							}
							else if ((oxt - 1) == mx) {
								move = 0;
								moveUser = 1;
							}
						}
						if (wallcheck == 0) {
							move = 0;
							moveUser = 1;
						}
					}
					else if (mx > oxt) {
						for (int i = 0; i < 10; i++) {
							if (i < mx && i > oxt) {
								if (map[oyt][i] == 1) {
									wallcheck = 1;
								}
							}
							else if (oxt == (mx - 1)) {
								move = 0;
								moveUser = 1;
							}
						}
						if (wallcheck == 0) {
							move = 0;
							moveUser = 1;
						}
					}
				}
				else if (oxt == mx && otcheck == 1) {
					if (oyt > my) {
						for (int i = 0; i < 10; i++) {
							if (i > my && i < oyt) {
								if (map[i][oxt] == 1) {
									wallcheck = 1;
								}
							}
							else if ((oyt - 1) == my) {
								move = 0;
								moveUser = 1;
							}
						}
						if (wallcheck == 0) {
							move = 0;
							moveUser = 1;
						}
					}
					else if (my > oyt) {
						for (int i = 0; i < 10; i++) {
							if (i < my && i > oyt) {
								if (map[i][oxt] == 1) {
									wallcheck = 1;
								}
							}
							else if (oyt == (my - 1)) {
								move = 0;
								moveUser = 1;
							}
						}
						if (wallcheck == 0) {
							move = 0;
							moveUser = 1;
						}
					}
				}
			}





			if (map[hdy][hdx] == map[my][mx]) {
				print(map);
				printf("\n���� �����߽��ϴ�. ������ �����մϴ�.");
				system("PAUSE");
			}

		}
	}


}


void print(int arr[10][10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] == 0)printf("��");
			else if (arr[i][j] == 1)printf("��");
			else if (arr[i][j] == 2)printf("��");
			else if (arr[i][j] == 3)printf("��");
			else if (arr[i][j] == 4)printf("��");
			else if (arr[i][j] == 5)printf("��");
			else if (arr[i][j] == 6)printf("��");
			else if (arr[i][j] == 7)printf("��");


		}
		printf("\n");
	}
}

void printting(int arr[10][10]) {
	printf("\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d", arr[i][j]);


		}
		printf("\n");
	}
}






