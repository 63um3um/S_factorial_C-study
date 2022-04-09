#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n, i;
    int *arr = NULL;
    int *p;

    scanf("%d",&n);
    arr = (int *)malloc(sizeof(int) * n);
    for(p = arr; p < arr+n; p++)
    {
        scanf("%d",p);
    }
    for(p = arr+n-1; p >= arr; p-- )
    {
        printf("%d ",*p);
    }
    
    free(arr);
    return 0;
}