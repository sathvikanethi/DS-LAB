#include<stdio.h>
int sel_sort(int [], int);
int main()
{
	int a[50], i, n;
	printf("enter the number of elements:");
	scanf("%d", &n);
	printf("enter the elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	sel_sort(a,n);
	printf("elements after sorting:");
	for(i=0; i<n; i++)
	{
		printf("%d", a[i]);
	}
}
int sel_sort(int a[50], int n)
{
	  int i, j, temp, min;
	  for(i=0; i<n-1; i++)
	  {
		  min = i;
		  for(j=i+1; j<n; j++)
		  {
			  if(a[min] > a[j])
			  {
				  min = j;
			  }
			  {
			  temp = a[j];
			  a[j] = a[min];
			  a[min] = temp;
			  }
		  }
	  }
}

	
