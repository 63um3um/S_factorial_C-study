#include<stdio.h>
#include<string.h>

int main(void)
{
    char arr[10][10];
    char word[10];
    int i,j;

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%c ",&arr[i][j]);
        }
    }
    scanf("%s",word);

    int len = strlen(word);
    char l_r[len], u_d[len], lu_rd[len];
    int cnt = 0;

    if(len == 1)
    {
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                if(arr[i][j] == word[0])
                {
                    cnt++;
                }
            }
        }
        printf("%d",cnt);
        return 0;
    }

    for(i=0; i<10; i++)
    {
        for(j=0; j<10-len+1; j++)
        {
            strncpy(l_r, &arr[i][j], len);
            if(!strncmp(l_r, word, len))cnt++;//printf("i : %d, j : %d, l_r : %s\n",i,j,l_r);
        }
    }

    for(i=0; i<10-len+1; i++)
    {
        for(j=0; j<10; j++)
        {
            int k;
            for(k=0; k<len; k++)
            {
                u_d[k] = arr[i+k][j];
            }
            if(!strncmp(u_d, word, len))cnt++;//printf("i : %d, j : %d, u_d : %s\n",i,j,u_d);
        }
    }

    for(i=0; i<10-len+1; i++)
    {
        for(j=0; j<10-len+1; j++)
        {
            int k;
            for(k=0; k<len; k++)
            {
                lu_rd[k] = arr[i+k][j+k];
            }
            if(!strncmp(lu_rd, word, len))cnt++;//printf("i : %d, j : %d, lu_rd : %s\n",i,j,lu_rd)
        }
    }

    printf("%d",cnt);

    return 0;

}