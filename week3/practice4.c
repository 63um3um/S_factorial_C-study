#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    char **str = NULL;
    int cnt=0;
    int i, j;
    
    scanf("%d ",&n);

    str = (char **)malloc(sizeof(char*)*n);

    for(i=0; i<n; i++)
    {
        str[i] = (char *)malloc(sizeof(char) * 100);
        fgets(str[i],100,stdin);
    }
    for(i=0; i<n; i++)
    {
        cnt = 0;
        for(j=0; str[i][j] != '\0'; j++)
        {
            if(str[i][j] == ' ')
            {
                cnt++;
            }
        }
        cnt++;
        printf("%d ",cnt);
    }

    for(i=0; i<n; i++)
    {
        free(str[i]);
    }
    free(str);
    return 0;
}