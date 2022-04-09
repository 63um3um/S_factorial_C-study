#include<stdio.h>
#include<limits.h>

int main(void)
{
    int arr[10][10];
    int i, j;

    int max = INT_MIN;
    int max_row, max_col;

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0; i<10; i++)
    {
        for(j=0; j<8; j++)
        {
            if(max < arr[i][j]+arr[i][j+1]+arr[i][j+2])
            {
                max = arr[i][j]+arr[i][j+1]+arr[i][j+2];
            }
        }
    }

    for(i=0; i<8; i++)
    {
        for(j=0; j<10; j++)
        {
            if(max < arr[i][j]+arr[i+1][j]+arr[i+2][j])
            {
                max = arr[i][j]+arr[i+1][j]+arr[i+2][j];
            }
        }
    }

    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(max < arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2])
            {
                max = arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2];
            }
        }
    }

    printf("%d",max);

    return 0;
}