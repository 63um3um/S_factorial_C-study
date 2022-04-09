#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int rev_atoi(char a[], int n)
{
    int i;
    int num=0;
    for(i=n; i>=0; i--)
    {
        num += pow(10,i)*(a[i]-'0');
    }   
    
    return num;
}

int main(void)
{
    char a[11];
    char b[11];

    int i, j;
    
    for(i=0; i<11; i++)
    {
        a[i] = '0';
        b[i] = '0';
    }

    scanf("%s %s",a,b);

    int alen = strlen(a);
    int blen = strlen(b);

    a[alen] = '0';
    b[blen] = '0';

    if(alen > blen)
    {
        for(i=0; i<alen; i++)
        {
            a[i] += b[i]-'0';
            if(a[i] > '9')
            {
                a[i] -= 10;
                a[i+1]++;
            }
        }
        for(i=10; i>=alen-1; i--)
        {
            if(a[i] != '0' || i == alen-1)
            {
                alen = i;
                break;
            }
        }
    }
    else
    {
        for(i=0; i<blen; i++)
        {
            a[i] += b[i]-'0';
            if(a[i] > '9')
            {
                a[i] -= 10;
                a[i+1]++;
            }
        }
        for(i=10; i>=blen-1; i--)
        {
            if(a[i] != '0' || i == blen-1)
            {
                alen = i;
                break;
            }
        }
    }
    
    a[alen+1] = 0;

    if(strlen(a) >= 10)
    {
        printf("0");
    }
    else
    {       
        printf("%d",rev_atoi(a,strlen(a)-1));
    }

    return 0;
}