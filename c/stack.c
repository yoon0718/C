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
		printf(stderr, "�޸𸮰� �����ؼ� �Ҵ��� �� �����ϴ�.\n");
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


// ������ ����Ǵ� ����� Ÿ�԰� ž�̶�� ����Ʈ ������
// ���������� �����ϴ� ���
// (���� ���� ���ù迭�� ž�� ���������� ����Ǿ��ֱ⶧����
//  �ϳ��� ���α׷����� �������� ���û���� �Ұ���)
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
		printf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else stack[++top] = item;
}

element pop()
{
	if (is_empty())
	{
		printf(stderr, "���� ���� ����\n");
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

//���� �ʱ�ȭ �Լ�
void int_stack(StackType* a, StackType* b)
{
	a->top = -1;
	b->bottom = 10;
}

//������°����Լ�

int is_empty(StackType* a, StackType* b)
{
	return (a->top == -1);
	return (b->bottom == 10);
}

//��ȭ���°����Լ�
int is_full(StackType* a, StackType* b)
{
	return(a->top == (MAX_STACK_SIZE - 1));
	return(b->bottom == (MAX_STACK_SIZE - 10));
}


//�����Լ�

void push(StackType* a, StackType* b, element itemone, element itemtwo)
{
	if (is_full(a, b))
	{
		printf(stderr, "������ȭ����\n");
		return;
	}
	else a->data[++(a->top)] = itemone;
	b->data[(b->bottom)--] = itemtwo;
}

//�����Լ�
element pop(StackType* a, StackType* b)
{
	if (is_empty(a, b))
	{
		printf(stderr, "���ð��鿡��\n");
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

//���� �ʱ�ȭ �Լ�
void int_stack(StackType *a, StackType *b)
{
	a->top = -1;
	b->bottom = 10;
}


//������°����Լ�

int is_empty(StackType *a)
{
	return (a->top == -1);
	
}
int is_emptytwo(StackType *b)
{
	return (b->bottom == 10);
}

//��ȭ���°����Լ�
int is_full(StackType *a)
{
	return(a->top == (MAX_STACK_SIZE - 1));
	
}
int is_fulltwo(StackType *b)
{
	
	return(b->bottom == (MAX_STACK_SIZE - 10));
}


//�����Լ�

void push(StackType *a, StackType *b, element itemone, element itemtwo)
{
	if (is_full(a))
	{
		printf(stderr, "������ȭ����\n");
		return;
	}
	else 
		for (int i = 0; i < itemone; i++)
		{
			a->data[++(a->top)] = i;
		}
	
	if (is_fulltwo(b))
	{
		printf(stderr, "������ȭ����\n");
		return;
	}
	else 
		for (int j = 9; j > itemtwo; j--)
		{
			b->data[(b->bottom)--] = j;
		}
}

//�����Լ�
element pop(StackType *a, StackType *b)
{
	if (is_empty(a))
	{
		printf(stderr, "���ð��鿡��\n");
		exit(1);
	}
	else a->data[(a->top)--];
	
	if (is_emptytwo(b))
	{
		printf(stderr, "���ð��鿡��\n");
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