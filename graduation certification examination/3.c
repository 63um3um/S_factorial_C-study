#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int n;
    char x[101];
    int i, j;

    scanf("%d %s",&n,x);
    getchar();
    char **str = NULL;
    int *arr;

    str = (char **)malloc(sizeof(char *)*n); //y
    if(str == NULL) return -1;

    arr = (int *)malloc(sizeof(int)*n);
    

    for(i=0; i<n; i++)
    {
        str[i] = (char *)malloc(sizeof(char)*101);
        fgets(str[i],101,stdin);
    }

    int x_size = strlen(x);
    int idx, max_idx, max = -1;

    for(i=0; i<n; i++)
    {
        idx = 0;
        while (idx < strlen(str[i]))
        {
            if(!strncmp(x,str[i]+idx,x_size))
            {
                idx += x_size;
                arr[i]++;
            }
            else
            {
                idx++;
            }
        }
        if(arr[i] > max)
        {
            max = arr[i];
            max_idx = i;
            
        }
        
    }
    if(max != 0) printf("%s",str[max_idx]);
    else printf("NONE");

    for(i=0; i<n; i++)
    {
        free(str[i]);
    }
    free(str);
}