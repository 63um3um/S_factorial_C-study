#include<stdio.h>
#include<stdlib.h>

struct date
{
    int year, month, day;
};


int main(void)
{
    int n, i, j;
    struct date *d;
    struct date tmp;

    scanf("%d",&n); 
    d = (struct date *)malloc(sizeof(struct date) * n);
    for(i=0; i<n; i++)
    {
        scanf("%d/%d/%d",&d[i].year,&d[i].month,&d[i].day);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=i; j<n; j++)
        {
            if(d[i].year > d[j].year)
            {
                tmp = d[i];
                d[i] = d[j];
                d[j] = tmp;
            }
            else if(d[i].year == d[j].year)
            {
                if(d[i].month > d[j].month)
                {
                    tmp = d[i];
                    d[i] = d[j];
                    d[j] = tmp; 
                }
                else if(d[i].month == d[j].month)
                {
                    if(d[i].day > d[j].day)
                    {
                        tmp = d[i];
                        d[i] = d[j];
                        d[j] = tmp;
                    }
                }
            }
        }
    }
    
    for(i=0; i<n; i++)
    {
        printf("%04d/%02d/%02d\n",d[i].year,d[i].month,d[i].day);
    }
    
    free(d);
    return 0;
}