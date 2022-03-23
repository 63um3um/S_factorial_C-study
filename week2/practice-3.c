#include<stdio.h>

int main(void)
{
    int n;
    char result[10];
    char *p;
    int cnt=0;

    scanf("%d",&n);
    while(n>0)
    {
        *(result+cnt) = (n%10)+'0';
        cnt++;
        n /= 10;
        
    }
    *(result+cnt) = '\0';
    printf("%s",result);
    
    return 0;
}