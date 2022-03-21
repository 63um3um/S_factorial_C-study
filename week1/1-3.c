#include<stdio.h>

int main(void)
{
    int n;
    int i;

    scanf("%d ",&n);

    char arr[n];
    char brr[n];
    char result[n];
    
    
    for(i=0; i<n; i++)
    {
        arr[i] = getchar();
    }
    getchar();
    for(i=0; i<n; i++)
    {
        brr[i] = getchar();
    }

    for(i=n-1; i>=0; i--)
    {
        if(arr[i] + brr[i]-'0' > '9')
        {
            if(i>0)
            {
                arr[i-1]++;
                arr[i] -= 10;
            }
            else
            {
                printf("1");
                arr[i] -= 10;
            }
        }
        result[i] = arr[i]+brr[i]-'0';
    }

    for(i=0; i<n; i++)
    {
        printf("%c",result[i]);
    }

    return 0;
}
