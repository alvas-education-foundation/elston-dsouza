#include <stdio.h>
void distict_elements(int a[], int n);
int main()
{
    int num, i, arr[20];
    printf("enter size of array :");
    scanf("%d", &num);
    printf("enter elements of array :");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("distint array elements count is :");
    distict_elements(arr, num);
    return 0;
}
void distict_elements(int a[], int n)
{
    int i, j,count=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<i; j++)
        
            if (a[i] == a[j])
                break;
        
        if (i == j)
            count++;
    }
    printf(" %d",count);
}

