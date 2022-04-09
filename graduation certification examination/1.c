#include<stdio.h>

void input(int *p, int N)
{
    int *i;
    for(i=p; i<p+N; i++)
    {
        scanf("%d",i);
    }
    return;
}

void output(int *p, int K)
{
    int *i;
    for(i=p; i<p+K; i++)
    {
        printf(" %d",*i);
    }

    return;
}

int main(void)
{
    int m, n;

    scanf("%d %d",&m,&n);
    int x[m];
    int y[n];
    int i;
    
    input(x,m);
    input(y,n);

    int k;
    scanf("%d",&k);
    if(k == 0) return 0;

    int xi=0, yi=0;

    while (xi < m || yi < n)
    {
        if(xi < m)
        {
            output(x+xi,k);
            xi += k;
        }
        if(yi < n)
        {
            output(y+yi,k);
            yi += k;
        }
    }
    return 0;

}