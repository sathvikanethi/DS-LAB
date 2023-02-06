#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *prev, *next;
};
struct node *start = NULL;
void traverse()
{
	if(start == NULL)
	{
		printf("\nList is empty");
		return;
	}
	struct node *temp;
	temp = start;
	while(temp!=NULL)
	{
		printf("Data=%d\n", temp->info);
		temp=temp->next;
	}
}
void insert_at_front()
{
	int data;
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted:");
	scanf("%d", &data);
	temp->info=data;
	temp->prev=NULL;
	temp->next=start;
	start=temp;
}
void insert_at_end()
{
	int data;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted:");
	scanf("%d", &data);
	temp -> prev=NULL;
	trav=start;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		while(trav->next!=NULL)
		{
			trav=trav->next;
		        temp->prev=trav;
			trav->next=temp;
		}
	}
}
void insert_position()
{
	struct node *temp, *newnode;
	int pos, data, i=1;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter position:");
	scanf("%d", &pos);
	newnode->next=NULL;
	newnode->prev=NULL;
	if(start=NULL)
	{
		start=newnode;
		newnode->prev=NULL;
		newnode->next=NULL;
	}
	else if(pos==1)
	{
		insert_at_front();
	}
	else
	{
		printf("\nEnter number to be inserted");
		scanf("%d", &data);
	        newnode->info=data;
	        temp=start;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next=newnode;
		temp->next->prev=newnode;
	}
}
void delete_first()
{
	struct node *temp;
	if(start == NULL)
		printf("\nList is empty\n");
	else
	{
		temp=start;
		start=start->next;
		if(start!=NULL)
			start->prev=NULL;
		        free(temp);
	}
}
void delete_end()
{
	struct node *temp, *prevnode;
	if(start==NULL)
		printf("\nList is empty\n");
	        temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
			if(start->next==NULL)
				start=NULL;
			else
			{
			temp->prev->next=NULL;
			}
			free(temp);
		}
}
void delete_position()
{
	struct node *temp, *position;
	int i=1, pos;
	temp=start;
	if(start==NULL)
		printf("List is empty\n");
	else
	{
		printf("\nEnter index:");
		scanf("%d", &pos);
		position=malloc(sizeof(struct node));
		temp=start;
		if(pos==1)
		{
			delete_first();
			if(start!=NULL)
			{
				start->prev=NULL;
			}
			free(position);
			return;
		}
		while(i<pos-1)
		{
			temp=temp->next;
			if(position->next!=NULL)
			{
				position->next->prev=temp;
			        temp->next=position->next;
			}
			free(position);
		}
	}
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.To traverse\n2.To insert at begining\n3.To insert at end\n4.To insert at position\n5.To delete first\n6.To delete last\n7.To delete at position\n8.To exit\n");
		printf("\nEnter choice:");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: traverse();
				break;
			case 2: insert_at_front();
				break;
			case 3: insert_at_end();
				break;
			case 4:
				insert_position();
				break;
			case 5:
				delete_first();
				break;
			case 6:
				delete_end();
				break;
			case 7:
				delete_position();
				break;
			case 8:
				exit(1);
				break;
			default:
				printf("\nIncorrect choice");
		}
	}
	return 0;
}


