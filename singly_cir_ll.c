#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node *create_list(struct node *list);
void display(struct node *last);
struct node *addtoempty(struct node *last);
struct node *addtobeg(struct node *last, int data);
struct node *addatend(struct node *last, int data);
struct node *addafter(struct node *last, int data);
struct node *del(struct node *last, int data);
int main()
{
	int choice, data, item;
	struct node *last = NULL;
	while(1);
	{
		printf("\n1.Create list\n2.Display\n3.Add to empty\n4.Add at beggining\n5.Add at end\n6.Add after\n7.Delete\n8.Quit");
		printf("Enter your choice:");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
			       	last = create_list(last);
				break;
			case 2: 
				display(last);
				break;
			case 3:
				printf("\nEnter the element to be inserted:");
				scanf("%d", &data);
				last = addtoempty;
				break;
			case 4:
				printf("\nEnter the element to be inserted:");
				scanf("%d", &data);
				last = addatbeg(last, data);
				break;
			case 5:
				printf("\mEnter number to be inserted:");
				scanf("%d", &data);
				last = addatend(last, data);
				break;
			case 6:
				printf("\nEnter element to be inserted:");
				scanf("%d", &data);
				printf("Enter element:");
				scanf("%d", &item);
				last = addafter(last, data, item);
				break;
			case 7:
				printf("\nEnter element to be deleted:");
				scanf("%d", &data);
				last = del(last, data);
				break;
			case 8:
				exit(1);
			default:
				printf("Invalid choice");
		}
	}
	return 0;
}
struct node *create_list(struct node *last)
{
	int i, n, data;
	printf("Enter no. of nodes:");
	scanf("%d", &n);
	last = NULL;
	if(n=0)
		return last;
	 printf("Enter element to insert:");
	 scanf("%d", &data);
	 last = addtoempty(last, data);
	 for(i=2; i<=n; i++)
	 {
		 printf("Enter element to be inserted:");
		 scanf("%d", &data);
		 last = addatend(last, data);
	 }
	 return last;
}
struct node *addtoempty(struct node *list, int data)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->info=data;
	list = temp;
	last->link=last;
	return last;
}
struct node *addatbeg(struct node *last, int data)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->info=data;
	temp->link=last->link;
	last->link=temp;
	return last;
}
struct node *addatend(struct node *last, int data)
{
	struct node *temp; 
	temp=(struct node*)malloc(sizeof(struct node));
	temp->info=data;
	temp->link=last->link;
	last->link=temp;
	last=temp;
	return last;
}
struct node *addafter(struct node *last, int data, int item)
{
	struct node *temp, *p;
	p=last->link;
	do
	{
		if(p->info==item)
		{
			temp = (struct node*)malloc(sizeof(struct node));
			temp->info=data;
			temp->link=p->link;
			p->link=temp;
			if(p==last)
				last = temp;
			return last;
		}
		p = p->link;
	}
	while(p!=last->link);
		printf(:"%d not present in list", item);
	return last;
}
struct node *del(struct node *last, int data)
{
	struct node *temp, *p;
	if(last == NULL)
		printf("List is empty");
	return last;
	if(last->link=last && last->info=data)
	{
		temp = last;
		last = NULL;
		free(temp);
		return last;
	}
	if(last->info==data)
	{
		temp=last->link;
		last->link=temp->link;
		free(temp);
		return last;
	}
	p=last->link;
	while(p->link!=last)
	{
		if(p->link->info==data)
		{
			temp=p->link;
			p->link=temp->link;
			free(temp);
			return last;
		}
		p=p->link;
	}
	if(last->info==data)
	{
		temp=last;
		p->link=last->link;
		last=p;
		free(temp);
		return last;
	}
	printf("Element not found", data);
	return last;
}
void display(struct node *last)
{
	struct node *p;
	if(last==NULL)
	{
		printf("List is empty");
		return;
	}
	p=last->link;
	do{
		printf("%d", p->info);
		p=p->link;
	}
	while(p!=last->link);
		printf("\n");
}














