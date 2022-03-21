#include<stdio.h>

int main(void)
{
    int x, y;
    int i, j, k;
    char arr[5][5];
    int zrr[5][10][10] = {0,};
    int num_star[5];

    scanf("%d %d ",&y,&x);

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%c",&arr[i][j]);
            if(j == 0 && arr[i][j] == '_')
            {
                arr[i][j] = '*';
            }
        }
        getchar();
    } //input


    for(i=0; i<5; i++)
    {
        for(j=4; j>=0; j--)
        {
            if(arr[i][j] == '*')
            {
                num_star[i] = j+1;
                break;
            }
        }
    } //check stars


    for(i=0; i<5; i++)
    {
        zrr[i][x][y] = 1;
        for(j=0; j<num_star[i]; j++)
        {
            if(x+j<10)
            {
                zrr[i][x+j][y] = 1;
            }
            if(x-j >=0)
            {
                zrr[i][x-j][y] = 1;
            }
            if(num_star[i] <= 3)
            {
                for(k=num_star[i]-1-j; k>0; k--)
                {
                    if(x+j < 10 && y+k<10)
                    {
                        zrr[i][x+j][y+k] = 1;
                    }
                    if(x+j<10 && y-k >= 0)
                    {
                        zrr[i][x+j][y-k] = 1;
                    }
                    if(x-j >= 0 && y+k < 10)
                    {
                        zrr[i][x-j][y+k] = 1;
                    }
                    if(x-j>=0 && y-k>=0)
                    {
                        zrr[i][x-j][y-k] = 1;
                    }
                }
            }
            else
            {
                int tmp = j;
                if(tmp == 2)
                {
                    tmp--;
                }
                if(tmp == 3 && num_star[i] == 5)
                {
                    tmp--;
                }
                for(k=num_star[i]-1-tmp; k>0; k--)
                {
                    if(x+j < 10 && y+k<10)
                    {
                        zrr[i][x+j][y+k] = 1;
                    }
                    if(x+j<10 && y-k >= 0)
                    {
                        zrr[i][x+j][y-k] = 1;
                    }
                    if(x-j >= 0 && y+k < 10)
                    {
                        zrr[i][x-j][y+k] = 1;
                    }
                    if(x-j>=0 && y-k>=0)
                    {
                        zrr[i][x-j][y-k] = 1;
                    }
                }
                
            }
        }
    }//규칙성을 모르니 하드코딩이나 해야죠.. 뭐..

    
    for(i=0; i<5; i++)
    {
        for(j=0; j<10; j++)
        {
            for(k=0; k<10; k++)
            {
                if(zrr[i][j][k] == 1)
                {
                    printf("*");
                }
                else
                {
                    printf("_");
                }
            }
            printf("\n");
        }
        printf("\n");
    }//printing

    return 0;
}
