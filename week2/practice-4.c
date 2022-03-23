#include<stdio.h>
#include<string.h>

int main(void)
{
    char arr[51];
    char brr[51];

    scanf("%s",arr);
    scanf("%s",brr);

    if (strcmp(arr,brr) < 0 ) // arr < brr
    {
        strcat(brr,arr);
        printf("%s",brr);
    }
    else
    {
        strcat(arr,brr);
        printf("%s",arr);
    }

    return 0;

}