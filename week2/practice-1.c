#include<stdio.h>

int main(void)
{
    int alpha[26] = {0,};
    int *a = alpha;
    char max_ch;
    int max = -1;
    char str[11];
    char *p = str;

    scanf("%s",p);

    for(p = str; p<str+11; p++)
    {
        if(*p >= 'a' && *p <= 'z')
        {
            *(a+(*p-'a')) += 1;
        }
        else if(*p >= 'A' && *p <= 'Z')
        {
            *(a+(*p-'A')) += 1;
        }
        
    }

    for(a = alpha; a<alpha+26; a++)
    {
        if(max <= *a)
        {
            max = *a;
            max_ch = (a-alpha)+'a';
        }
    }

    printf("%c %d",max_ch,max);

    return 0;

}