#include<stdio.h>
int int_sort(int [] , int);
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
        int_sort(a,n);
        printf("elements after sorting:");
	for(i=0; i<n; i++)
	{
		printf("%d", a[i]);
	}
}
int int_sort(int a[50], int n)
{
          int i, j, temp;
          for(i=0; i<n; i++)
          {
                  for(j=i-1; j>=0; j--)
                  {
			  if(a[j] > a[j+1])
			  {
				  temp = a[j];
				  a[j] = a[j+1];
				  a[j+1] = temp;
			  }
			  else
				  break;
		  }
	  }
}
