#include<stdio.h>
int bub_sort(int [], int);
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
        bub_sort(a,n);
        printf("elements after sorting:");
	for(i=0; i<n; i++)
	{
		printf("%d", a[i]);
	}
}
int bub_sort(int a[50], int n)
{
          int i, j, temp;
          for(i=0; i<n; i++)
	  {
                  for(j=0; j<n-i-1; j++)
		  {
			  if(a[j] > a[j+1])
			  {
                          temp = a[j];
                          a[j] = a[j+1];
			  a[j+1] = temp;
			  }
		  }
	  }
}


