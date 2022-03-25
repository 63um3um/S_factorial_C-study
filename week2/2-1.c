#include<stdio.h>
#include<math.h>

void d_to_b(unsigned int d, char *b)
{   
    int cnt;
    
    for(cnt=33; cnt>=0; cnt--)
    {
        if(d >= pow(2,cnt))
        {
            break;
        }
    }

    b[cnt+1] = '\0';

    while(d > 0)
    {
        b[cnt--] = d%2+'0';
        d /= 2;
    }
}

int main(void)
{
    unsigned int n;
    char binary[40];

    scanf("%u",&n);
    if(n == 0)
    {
        printf("0");
        return 0;
    }
    d_to_b(n,binary);
    
    printf("%s",binary);
    return 0;
}