#include<stdio.h>

int main(void)
{
    int n;
    int i,j;
    int cnt;

    scanf("%d",&n);
    cnt = (n*n)%9;
    if(cnt == 0)
    {
        cnt = 9;
    }

    for(i=0; i<n; i++)
    {
        for(j=n-1; j>i; j--)
        {
            printf(" ");
        }
        for(j=0; j<2*i+1; j++)
        {
            while(cnt <= 0)
            {
                cnt += 9;
            }
           if((cnt+j)%9 == 0)
           {
               printf("%d",(cnt+j)%9+9);
           }
           else
           {
               printf("%d",(cnt+j)%9);
           }
        }
        cnt -= (2*(i+1)+1);
        printf("\n");
    }

}
