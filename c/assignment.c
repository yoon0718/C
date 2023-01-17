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

	printf("월급을 입력하시오");
	scanf_s("%d", &salary);

	deposit = 10 * 12 * salary;

	printf("10년 동안의 저축액: %d\n", deposit);

	return 0;
}

#include <stdio.h>

int main(void) {
	int x;
	int y;
	int sum;

	printf("첫번째 숫자를 입력하시오:");
	scanf_s("%d", &x);
	
	printf("두번째 숫자를 입력하시오:");
	scanf_s("%d", &y);

	sum = x + y;
	printf("두수의 합: %d", sum);


	return 0;
}*/

/*#include<stdio.h>

void main() {
	char ch;
	printf("문자 1개를 입력하세요\n");
	scanf_s("%c", &ch);
	printf("해당 문자에 대한 아스키 코드 값은 %d 입니다.", ch);
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
	printf("짝수의 개수는 %d개 홀수의 개수는 %d개 입니다.", j, k);
	

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
	
	printf("\n5이상인 수를 가지는 배열요소 개수는 %d입니다", j);
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
		printf("%d일차 금액 : %d\n", i+1, moneyarray[i]);
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
	if (c >= 30)printf("%d%%오류률로 인해 실패입니다.", c);
	else ("%d%%오류률로 인해 성공입니다.", c);

}*/

/*#include<stdio.h>
void main() {
	int x, y;
	printf("밑변의 길이를 입력하시오.");
	scanf_s("%d", &x);
	printf("높이의 길이를 입력하시오.");
	scanf_s("%d", &y);
	printf("직각삼각형의 넓이 : %d", x * y / 2);
}*/

/*#include<stdio.h>
void main() {
	char a;
	printf("영문소문자를 입력하시오");
	scanf_s("%c", &a);
	printf("대문자로 변경하면 %c 입니다", a - 32);
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
	

	printf("이번 예상 번호는 %d / %d / %d / %d / %d / %d / %d", a, b, c, d, e, f, bounus);
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
	printf("첫번째 소문자를 입력하시오");
	scanf_s("%c", &first);
	getchar();
	printf("두번째 소문자를 입력하시오");
	scanf_s("%c", &second);
	printf("입력한 소문자 : %c  %c\n", first, second);
	printf("소문자 아스키코드 : %d  %d\n", first, second);
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
	printf("\n1의 개수 : %d", check);
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
	printf("\n0의 개수 : %d\n1의 개수 : %d\n2의 개수 : %d\n3의 개수 : %d", checkZero, checkOne, checkTwo, checkThree);
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
	printf("가장 큰 수 : %d", bigNumber);
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
	printf("가장 큰 수 : %d / 가장 작은 수 : %d\n", bigNumber, smallNumber);
	printf("가장 큰 수와 가장 작은 수의 차이 : %d", bigNumber - smallNumber);
}*/
/*#include<stdio.h>
#include<time.h>
void main() {
	srand(time(NULL));
	int diceOne, diceTwo, diceThree;
	printf("주사위를 던져라\n");
	for (int i = 1; i < 11; i++) {
		diceOne = rand() % 6 + 1;
		diceTwo = rand() % 6 + 1;
		diceThree = rand() % 6 + 1;
		printf("%d %d %d - %d\n", diceOne, diceTwo, diceThree, i);
		if (diceOne % 2 == 0 && diceTwo % 2 == 0 && diceThree % 2 == 0) {
			printf("스핑크스 : 오이디푸스 자네가 %d번만에 이겻네 소원을 들어주지", i);
			break;
		} 
		else {
			if (i < 10)printf("스핑크스 : 오이디푸스 주사위를 다시 던지게\n");
			else printf("스핑크스 : 오이디푸스 자네가 졋다네 내 소원을 들어주게\n");
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
	printf("원래 숫자 : ");
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
	
	
	printf("작은 숫자 : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arraySmall[i]);
	}
	printf("\n");
	printf("최종\n더큰 숫자 : ");
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
	printf("\n두개의 인덱스 값을 입력하시오\n");
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
	a = rand() % 19; // 무조건 2가 찍혀야 하기 때문
	c = 19 - a;
	d = a + 1;
	b = rand() % c + d;
	array[a] = 1;
	array[b] = 2;
	for (int i = 0; i < 20; i++) {
		printf("%d", array[i]);
	}
	printf("\n");
	printf("%d 만큼 떨어져 있습니다.", b - a - 1);
	
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
