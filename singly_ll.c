#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *start = NULL;
void create_list()
{
	if(start == NULL)
	{
		int n;
		printf("\nEnter the number of nodes:");
		scanf("%d", &n);
		if(n!=0)
		{
			int data, i;
			struct node *newnode;
			struct node *temp;
			newnode = malloc(sizeof(struct node));
			start = newnode;
			temp = start;
			printf("\nEnter number to be insterted:");
			scanf("%d", &data);
			start->info=data;
			for(i=0; i<=n; i++)
			{
				newnode= malloc(sizeof(struct node));
				temp->link=newnode;
				printf("\nEnter number to be inserted:");
				scanf("%d", &data);
				newnode->info=data;
				temp = temp->link;
			}
		}
			printf("\nThe list is created\n");
	}
		else
			printf("\nThe list is already created\n");
}
void traverse()
{
	struct node *temp;
	if(start == NULL)
	{
		printf("\nlist is empty\n");
	}
        else
	{
		temp=start;
		while(temp!=NULL)
		{
			printf("Data = %d\n", temp->info);
			temp=temp->link;
		}
	}
}
void insert_at_front()
{
	int data;
	struct node *temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to be inserted:");
	scanf("%d", &data);
	temp->info=data;
	temp->link=start;
	start=temp;
}
void insert_at_end()
{
	int data;
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to be inserted:");
	scanf("%d", &data);
	temp -> link=0;
	temp->info=data;
	head=start;
	while(head->link!=NULL)
	{
		head=head->link;
	}
	head->link=temp;
}
void insert_position()
{
	struct node *temp, *newnode;
	int pos, data, i=1;
	newnode=malloc(sizeof(struct node));
	printf("\nEnter position and data:");
	scanf("%d %d", &pos, &data);
	temp = start;
	newnode->info=data;
	newnode->link=0;
	while(i<pos-1)
	{
		temp=temp->link;
		i++;
	}
	newnode->link=temp->link;
	temp->link=newnode;
}
void delete_first()
{
	struct node *temp;
	if(start == NULL)
		printf("\nList is empty\n");
	else
	{
		temp=start;
		start=start->link;
		free(temp);
	}
}
void delete_end()
{
	struct node *temp, *prevnode;
	if(start==NULL)
		printf("\nList is empty\n");
	else
	{
		temp=start;
		while(temp->link=0)
		{
			prevnode=temp;
			temp=temp->link;
		}
		free(temp);
		prevnode->link=0;
	}
}
void delete_position()
{
	struct node *temp, *position;
	int i=1, pos;
	if(start==NULL)
		printf("List is empty\n");
	else
	{
		printf("\nEnter index:");
		scanf("%d", &pos);
		position=malloc(sizeof(struct node));
		temp=start;
		while(i<pos-1)
		{
			temp=temp->link;
			temp->link=position->link;
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


