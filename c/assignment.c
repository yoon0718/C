/*#include<stdio.h>
#include<Windows.h>
#include<time.h>
void printmap(int map[5][5]);
void main() {
	int map[5][5] = { 0, };
	srand(time(NULL));
	int i = rand() % 5;
	int j = rand() % 5;
	map[j][i] = 2;
	int k = rand() % 4;
	if(k == 1)
	printmap(map);
}

void printmap(int map[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (map[j][i] == 0)printf("0");
			else if (map[j][i] == 1)printf("1");
			else if (map[j][i] == 2)printf("2");
		}
		printf("\n");
	}
}


#include <stdio.h>

int main(void) {
	int salary;
	int deposit;

	printf("������ �Է��Ͻÿ�");
	scanf_s("%d", &salary);

	deposit = 10 * 12 * salary;

	printf("10�� ������ �����: %d\n", deposit);

	return 0;
}

#include <stdio.h>

int main(void) {
	int x;
	int y;
	int sum;

	printf("ù��° ���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &x);
	
	printf("�ι�° ���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &y);

	sum = x + y;
	printf("�μ��� ��: %d", sum);


	return 0;
}*/

/*#include<stdio.h>

void main() {
	char ch;
	printf("���� 1���� �Է��ϼ���\n");
	scanf_s("%c", &ch);
	printf("�ش� ���ڿ� ���� �ƽ�Ű �ڵ� ���� %d �Դϴ�.", ch);
}*/

/*#include<stdio.h>

void main() {
	int array[5];
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < 5) {
		scanf_s("%d", &array[i]);
		if (array[i] % 2 == 0) {
			j++;
		}
		else {
			k++;
		}
		i++;
	}
	printf("¦���� ������ %d�� Ȧ���� ������ %d�� �Դϴ�.", j, k);
	

}*/
/*#include<stdio.h>
#include<time.h>

void main() {
	srand(time(NULL));
	int array[10];
	int j = 0;
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 10;
		if (array[i] >= 5) {
			printf("%d", array[i]);
			j++;
		}
	}
	
	printf("\n5�̻��� ���� ������ �迭��� ������ %d�Դϴ�", j);
}*/
/*#include<stdio.h>
void main() {
	int a = 0;
	int b = 1;
	int sub = 0;
	while (1) {
		a = b * b;
		sub = sub + a;
		if (sub > 10000)break;
		b++;
		
	}
	printf("%d", b);
}*/

/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[10];
	int moneyarray[10];
	int money = 1000;
	int c = 0;
	for (int i = 0; i < 10; i++) {
		array[i] = i + 1;
	}

	for (int j = 0; j < 10; j++) {
		moneyarray[c] = money;
		if (array[rand() % 10] < 5) {
			money += 100;
		}
		else {
			money -= 50;
		}
		c++;
		
	}
	for (int i = 0; i < 10; i++) {
		printf("%d���� �ݾ� : %d\n", i+1, moneyarray[i]);
	}
}*/

/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int map[10][10];
	int array[10];
	int c = 0;
	for (int i = 0; i < 10; i++) {
		array[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (array[rand() % 10] <= 4) {
				map[i][j] = 1;
				c++;
			}
			else {
				map[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d", map[i][j]);
		}
		printf("\n");
	}
	if (c >= 30)printf("%d%%�������� ���� �����Դϴ�.", c);
	else ("%d%%�������� ���� �����Դϴ�.", c);

}*/

/*#include<stdio.h>
void main() {
	int x, y;
	printf("�غ��� ���̸� �Է��Ͻÿ�.");
	scanf_s("%d", &x);
	printf("������ ���̸� �Է��Ͻÿ�.");
	scanf_s("%d", &y);
	printf("�����ﰢ���� ���� : %d", x * y / 2);
}*/

/*#include<stdio.h>
void main() {
	char a;
	printf("�����ҹ��ڸ� �Է��Ͻÿ�");
	scanf_s("%c", &a);
	printf("�빮�ڷ� �����ϸ� %c �Դϴ�", a - 32);
}*/

/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int a, b, c, d, e, f, bounus;
	a = rand() % 45 + 1;
	b = rand() % 45 + 1;
	c = rand() % 45 + 1;
	d = rand() % 45 + 1;
	e = rand() % 45 + 1;
	f = rand() % 45 + 1;
	bounus = rand() % 45 + 1;
	

	printf("�̹� ���� ��ȣ�� %d / %d / %d / %d / %d / %d / %d", a, b, c, d, e, f, bounus);
}*/
/*#include<stdio.h>
void main() {
	char alp = 'a';
	for (int a = 0; a < 25; a++) {
		printf("%c", alp);
		alp++;
	}
}*/

/*#include<stdio.h>
void main() {
	
	int a;
	char first, second;
	printf("ù��° �ҹ��ڸ� �Է��Ͻÿ�");
	scanf_s("%c", &first);
	getchar();
	printf("�ι�° �ҹ��ڸ� �Է��Ͻÿ�");
	scanf_s("%c", &second);
	printf("�Է��� �ҹ��� : %c  %c\n", first, second);
	printf("�ҹ��� �ƽ�Ű�ڵ� : %d  %d\n", first, second);
	for (a = first; a <= second; a++) {
		printf("%d\n", a);
	}
}*/

/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[10];
	int check = 0;
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 2;
			if (array[i] == 1)check++;
			printf("%d", array[i]);
	}
	printf("\n1�� ���� : %d", check);
}*/
/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[20];
	int checkZero = 0;
	int checkOne = 0;
	int checkTwo = 0;
	int checkThree = 0;
	for (int i = 0; i < 20; i++) {
		array[i] = rand() % 4;
		if (array[i] == 0)checkZero++;
		else if (array[i] == 1)checkOne++;
		else if (array[i] == 2)checkTwo++;
		else checkThree++;
		printf("%d", array[i]);
	}
	printf("\n0�� ���� : %d\n1�� ���� : %d\n2�� ���� : %d\n3�� ���� : %d", checkZero, checkOne, checkTwo, checkThree);
}*/

/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[10] = { 0, };
	int bigNumber = 0;
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 100;
		if (bigNumber < array[i])bigNumber = array[i];
	}
	printf("���� ū �� : %d", bigNumber);
}*/

/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[10] = { 0, };
	int bigNumber = 0;
	int smallNumber = 200;
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 200;
		if (bigNumber < array[i])bigNumber = array[i];
		if (smallNumber > array[i])smallNumber = array[i];
		
	}
	printf("���� ū �� : %d / ���� ���� �� : %d\n", bigNumber, smallNumber);
	printf("���� ū ���� ���� ���� ���� ���� : %d", bigNumber - smallNumber);
}*/
/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int diceOne, diceTwo, diceThree;
	printf("�ֻ����� ������\n");
	for (int i = 1; i < 11; i++) {
		diceOne = rand() % 6 + 1;
		diceTwo = rand() % 6 + 1;
		diceThree = rand() % 6 + 1;
		printf("%d %d %d - %d\n", diceOne, diceTwo, diceThree, i);
		if (diceOne % 2 == 0 && diceTwo % 2 == 0 && diceThree % 2 == 0) {
			printf("����ũ�� : ���̵�Ǫ�� �ڳװ� %d������ �̰�� �ҿ��� �������", i);
			break;
		} 
		else {
			if (i < 10)printf("����ũ�� : ���̵�Ǫ�� �ֻ����� �ٽ� ������\n");
			else printf("����ũ�� : ���̵�Ǫ�� �ڳװ� ���ٳ� �� �ҿ��� ����ְ�\n");
		}
	}
}*/
/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int a = 10;
	for (int i = 0; i < 5; i++) {
		int coin = rand() % 2;
		if (coin == 0)a--;
		else if (coin == 1)a++;
		printf("a : %d / coin : %d\n", a, coin);
	}
}*/
/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[5] = { 0, };
	int bign;
	for (int i = 0; i < 5; i++) {
		array[i] = rand() % 100;
		printf(" %d ", array[i]);
	}
	printf("\n");
	printf(" %d ", array[0]);
	for (int i = 0; i < 5; i++) {
		if (array[i] < array[i + 1])printf(" %d ", array[i + 1]);
		else printf(" * ");
	}
}*/
/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	
	int array[5] = { 0, };
	int arrayBig[5] = { 0, };
	int arraySmall[5] = { 0, };
	printf("���� ���� : ");
	for (int i = 0; i < 5; i++) {
		array[i] = rand() % 100;
		printf("%d ", array[i]);
	}
	
	arrayBig[0] = array[0];
	
	for (int i = 0; i < 5; i++) {
		if (array[i] < array[i + 1]) {
			arrayBig[i + 1] = array[i + 1];
		}
		else {
			arraySmall[i + 1] = array[i + 1];
		}
	}
	printf("\n");
	
	
	printf("���� ���� : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arraySmall[i]);
	}
	printf("\n");
	printf("����\n��ū ���� : ");
	for (int i = 0; i < 5; i++) {
		if(arrayBig[i] != 0)printf("%d ", arrayBig[i]);
	}
	
}*/

/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[10] = { 0, };
	int a, b;
	int sub = 0;
	int ax = 0;
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 5;
		printf("%d", array[i]);
	}
	printf("\n�ΰ��� �ε��� ���� �Է��Ͻÿ�\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	while (a <= b) {
		ax = ax + array[a];
		a++;
	}
	printf("%d\n", ax);
	for (a; a <= b; a++) {
		sub = sub + array[a];
	}
	printf("%d", sub);
}*/
/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[10] = { 0, };
	int a = 0;
	int c;
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 20;
		printf("%d ", array[i]);
	}
	while (a < 10) {
		int b = 0;
		while (b < 10) {
			if (array[a] < array[b]) {
				c = array[b];
				array[b] = array[a];
				array[a] = c;
			}
			b++;
		}
		a++;
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
}*/

/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[5] = { 0, };
	int i = 0;
	int count = 0;
	int randomNumber;
	while (i < 5) {
		randomNumber = rand() % 9 + 1;
		printf("%d ", randomNumber);
		if (randomNumber % 2 == 0) {
			array[i] = randomNumber;
			i++;
		}
		count++;
	}
	printf("\n");
	for (int j = 0; j < 5; j++) {
		printf("%d ", array[j]);
	}
	printf("\n");
	printf("%d", count);
}*/
/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int arrayOne[10] = { 0, };
	int arrayTwo[10] = { 0, };
	int count = 0;
	for (int i = 0; i < 10; i++) {
		arrayOne[i] = rand() % 2;
		arrayTwo[i] = rand() % 2;
		if (arrayOne[i] == arrayTwo[i])count++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d", arrayOne[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", arrayTwo[i]);
	}
	printf("\n");
	printf("%d%%", count * 10);
}*/
/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[20] = { 0, };
	int a, b, c, d;
	a = rand() % 19; // ������ 2�� ������ �ϱ� ����
	c = 19 - a;
	d = a + 1;
	b = rand() % c + d;
	array[a] = 1;
	array[b] = 2;
	for (int i = 0; i < 20; i++) {
		printf("%d", array[i]);
	}
	printf("\n");
	printf("%d ��ŭ ������ �ֽ��ϴ�.", b - a - 1);
	
}*/
/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int array[5][5] = { 0, };
	int x, y;
	for (int i = 0; i < 3; i++) {
		x = rand() % 5;
		y = rand() % 5;
		array[x][y] = i + 1;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d", array[j][i]);
		}
		printf("\n");
	}
	for (int k = 1; k <= 3; k++) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (array[j][i] == k) {
					printf("%d : (%d, %d)\n", array[j][i], j, i);
				}
			}
		}
	}
	
}
*/
