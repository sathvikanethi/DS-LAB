#include<stdio.h>
int bin_search(int arr[], int x, int low, int high)
{
        int rec;
        size--;
        if(size >= 0)
        {
                if(arr[size] == x)
                        return size;
                else
                        rec = bin_search(arr, x, low, high);
        }
        else
                return -1;
        return rec;
}
int main()
{
        int arr[50], size, x, i;
        printf("enter size:");
        scanf("%d", &size);
        printf("enter elements:");
        for(i=0; i<size; i++)
        {
                scanf("%d", &arr[i]);
        }
        printf("enter element to be searched:");
        scanf("%d", &x);
        int res = lin_search(arr, size, x);
        printf("element is in index %d", res);
}
