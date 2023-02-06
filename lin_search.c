#include<stdio.h>
int lin_search(int a[], int n, int x)
{
	for(int i=0; i<n; i++)
	{
		if(a[i] == x)
		{
			return i;
		}
	}
}
int main()
{
     int a[30],x,n;
     printf("enter size:");
     scanf("%d", &n);
     printf("enter the elements");
     for(int i=0; i<n; i++)
     {
       scanf("%d", &a[i]);
     }
     printf("enter element to be searched");
     scanf("%d", &x);
     printf("element is at index:%d", lin_search(a,n,x));
}
