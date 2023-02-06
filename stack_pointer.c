#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAX 50
int size;
struct stack
{
	int arr[MAX];
	int top;
};
void int_stk(struct stack *st)
{
	st->top == -1;
}
void push(struct stack *st, int num)
{
	if(st->top == size - 1)
	{
		printf("stack overflow");
		return;
	}
	st->top++;
	st->arr[st->top] = num;
}
int pop(struct stack *st)
{
	int num;
	if(st->top == -1)
	{
		printf("stack underflow");
		return 0;
	}
	num = st->arr[st->top];
	st->top--;
	return num;
}
void display(struct stack*st)
{
	int i;
	for(i=st->top; i>=0; i--)
		printf("%d", st->arr[i]);
}
int main()
{
	int element, opt, val;
	struct stack ptr;
	int_stk(&ptr);
	printf("enter stack size:");
	scanf("%d", &size);
	while(1)
	{
		printf("1.push");
		printf("2.pop");
		printf("3.display");
		printf("4.quit");
		printf("\n enter your option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: 
				printf("enter element into stack:\n");
				scanf("%d", &val);
				push(&ptr, val);
				break;
			case 2:
				element = pop(&ptr);
				printf("the element popped from stack is %d\n", element);
				break;
			case 3:
				printf("the current stack elements are:\n");
				display(&ptr);
				break;
			case 4:
				exit(0);
			default:
				printf("enter correct option: try again\n");
		}
	}
	return(0);
}

