#include<stdio.h>
#include<string.h>

int check(char *str)
{
    int i;
    for(i=0; i<(strlen(str)+1)/2; i++)
    {
        if(str[i] != str[strlen(str)-i-1])
        {
            return 0;
        }
    }
    return 1;

}

int main(void)
{
    char str[31];
    scanf("%s",str);
    printf("%lu %d",strlen(str),check(str));

    return 0;
}