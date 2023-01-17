/*#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define SIZE 10
int main(void)
{
	int* p;
	p = (int*)malloc(SIZE * sizeof(int));
	if (p == NULL)
	{
		printf(stderr, "메모리가 부족해서 할당할 수 없습니다.\n");
		exit(1);
	}
	for (int i = 0; i < SIZE; i++)
	{
		p[i] = i;
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d", p[i]);
	}
	free(p);
	return 0;
}	*/


// 스택의 저장되는 요소의 타입과 탑이라는 포인트 변수를
// 전역변수로 구현하는 방법
// (구현 쉬움 스택배열과 탑이 전역변수로 선언되어있기때문에
//  하나의 프로그램에서 여러게의 스택사용이 불가능)
/*#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;

int is_empty()
{
	return (top == -1);
}

int is_full()
{
	return (top == (MAX_STACK_SIZE - 1));
}

void push(element item)
{
	if (is_full())
	{
		printf(stderr, "스택 포화 에러\n");
		return;
	}
	else stack[++top] = item;
}

element pop()
{
	if (is_empty())
	{
		printf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return stack[top--];
}

int main(void)
{
	push(1);
	push(2);
	push(3);
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());
	return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 10
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
	int bottom;

} StackType;

//스택 초기화 함수
void int_stack(StackType* a, StackType* b)
{
	a->top = -1;
	b->bottom = 10;
}

//공백상태검출함수

int is_empty(StackType* a, StackType* b)
{
	return (a->top == -1);
	return (b->bottom == 10);
}

//포화상태검출함수
int is_full(StackType* a, StackType* b)
{
	return(a->top == (MAX_STACK_SIZE - 1));
	return(b->bottom == (MAX_STACK_SIZE - 10));
}


//삽입함수

void push(StackType* a, StackType* b, element itemone, element itemtwo)
{
	if (is_full(a, b))
	{
		printf(stderr, "스택포화에러\n");
		return;
	}
	else a->data[++(a->top)] = itemone;
	b->data[(b->bottom)--] = itemtwo;
}

//삭제함수
element pop(StackType* a, StackType* b)
{
	if (is_empty(a, b))
	{
		printf(stderr, "스택공백에러\n");
		exit(1);
	}
	else a->data[(a->top)--];
	b->data[++(b->bottom)];
}

int main(void)
{
	StackType a, b;

	int_stack(&a, &b);
	push(&a, &b, 5, 7);
	printf("%d\n", pop(&a, &b));
}

/*#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 10
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
	int bottom;

} StackType;

//스택 초기화 함수
void int_stack(StackType *a, StackType *b)
{
	a->top = -1;
	b->bottom = 10;
}


//공백상태검출함수

int is_empty(StackType *a)
{
	return (a->top == -1);
	
}
int is_emptytwo(StackType *b)
{
	return (b->bottom == 10);
}

//포화상태검출함수
int is_full(StackType *a)
{
	return(a->top == (MAX_STACK_SIZE - 1));
	
}
int is_fulltwo(StackType *b)
{
	
	return(b->bottom == (MAX_STACK_SIZE - 10));
}


//삽입함수

void push(StackType *a, StackType *b, element itemone, element itemtwo)
{
	if (is_full(a))
	{
		printf(stderr, "스택포화에러\n");
		return;
	}
	else 
		for (int i = 0; i < itemone; i++)
		{
			a->data[++(a->top)] = i;
		}
	
	if (is_fulltwo(b))
	{
		printf(stderr, "스택포화에러\n");
		return;
	}
	else 
		for (int j = 9; j > itemtwo; j--)
		{
			b->data[(b->bottom)--] = j;
		}
}

//삭제함수
element pop(StackType *a, StackType *b)
{
	if (is_empty(a))
	{
		printf(stderr, "스택공백에러\n");
		exit(1);
	}
	else a->data[(a->top)--];
	
	if (is_emptytwo(b))
	{
		printf(stderr, "스택공백에러\n");
		exit(1);
	}
	else b->data[++(b->bottom)];
}

int mainfdsa(void)
{
	StackType a, b;

	int_stack(&a, &b);
	push(&a, &b, 5, 7);
	
}*/