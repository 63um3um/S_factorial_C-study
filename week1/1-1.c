#include<stdio.h>
#include<limits.h>

int main(void)
{
    int arr[10];
    int i;
    int max = INT_MIN, min = INT_MAX, avg = 0;

    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
        avg += arr[i];
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    printf("Min : %d\nMax : %d\nAverage : %d",min,max,avg/10);
    return 0;
}
