#define true 1
#define false 0
#include<stdio.h>
#include<stdlib.h>
struct q_point
{
	int ele;
	struct q_point *n;
};
struct q_point *f_ptr=NULL;
int e_que(void);
void add_ele(int);
int rem_ele(void);
void show_ele();
void main()
{
	int ele, choice, j;
	while(1)
	{
		printf("\nImplementation of queue using pointers\n");
		printf("MENU\n");
		printf("1.Insert an element\n");
		printf("2.Delete an element\n");
		printf("3.Dispaly an element\n");
		printf("4.Exit\n");
		printf("Enter your choice:\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				{
					printf("Element to be inserted:\n");
					scanf("%d", &ele);
					add_ele(ele);
					break;
				}
			case 2:
				{
					if(!e_que())
					{
						j = rem_ele();
						printf("%d is removed from queue\n", j);
					}
					else
					{
						printf("Queue is empty\n");
					}
					break;
				}
			case 3:
				show_ele();
					break;
			case 4:
				exit(1);
					break;
			default:
				printf("Invalid choice\n");
					break;
		}
	}
}
int e_que(void)
{
	if(f_ptr==NULL)
	{
		return true;
	}
	        return false;
}
void add_ele(int ele)
{
	struct q_point *queue = (struct q_point*)malloc(sizeof(struct q_point));
	queue->ele = ele;
	queue->n=NULL;
	if(f_ptr == NULL)
		f_ptr = queue;
	else
	{
		struct q_point *ptr;
		ptr = f_ptr;
		for(ptr = f_ptr; ptr->n!=NULL; ptr=ptr->n);
		ptr->n=queue;
	}
}
int rem_ele()
{
	struct q_point *queue = NULL;
	if(e_que() == false)
	{
		int j=f_ptr->ele;
		queue = f_ptr;
		f_ptr = f_ptr->n;
		free(queue);
		return j;
	}
	else
	{
		printf("Queue is empty\n");
		return -9999;
	}
}
void show_ele()
{
	struct q_point *ptr = NULL;
	ptr = f_ptr;
	if(e_que())
	{
		printf("Queue is empty\n");
		return;
	}
	else 
	{
		printf("Elements present in queue are:\n");
		while(ptr!=NULL)
		{
			printf("%d", ptr->ele);
			ptr = ptr->n;
		}
	}
}
