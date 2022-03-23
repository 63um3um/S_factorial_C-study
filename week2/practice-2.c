#include<stdio.h>

void addArray(int n, int *arr, int *brr, int *crr)
{
    int *a;
    for(a=arr; a < arr+n; a++)
    {
        *(crr + (a-arr)) = *a + *(brr + (n-1-(a-arr)));
    }
    int *c;
    for(c=crr; c<crr+n; c++)
    {
        printf(" %d",*c);
    }
    return;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n], brr[n];
    int crr[n];
    int *a, *b, *c;
    for(a = arr; a < arr+n; a++)
    {
        scanf("%d",a);
    }
    for(b = brr; b < brr+n; b++)
    {
        scanf("%d",b);
    }

    addArray(n,arr,brr,crr);
    
    return 0;
    
}