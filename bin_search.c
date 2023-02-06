#include <stdio.h>
int bin_search(int [], int , int , int );
int main()
{
	int a[50], i, x, n;
	printf("enter the size:");
	scanf("%d", &n);
        printf("enter the elements:");
        for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter element to be searched:");
	scanf("%d", &x);
	int result = bin_search(a, x, 0, n-1);
        if (result == -1)
        printf("Not found");
        else
        printf("Element is found at index %d", result);
        return 0;
}
int bin_search(int a[], int x, int low, int high)
{
  while (low <= high) 
  {
    int mid = (low + high) / 2;
    if (x == a[mid])
      return mid;
    else if (x>a[mid])
      low = mid + 1;
    else
      high = mid - 1;
  }
  return -1;
}

