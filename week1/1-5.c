#include<stdio.h>

int main(void)
{
    int n;
    int i, j;
    int jmp;
    int turn;
    int cnt;

    scanf("%d",&n);
    jmp = n;
    if(n%2 == 0)
    {
        turn = 0;
    }
    else
    {
        turn = 1;
    }
    for(i=0; i<n*4+1; i++)
    {
        cnt = 0;
        for(j=0; j<n*2+1; j++)
        {
            if(jmp == j && cnt == 0)
            {
                cnt++;
                printf("O");
                if(turn%2 == 0)
                {
                    if(jmp > 0 || jmp == 2*n)
                    {
                        jmp--;
                    }
                    else if(jmp == 0)
                    {
                        turn++;
                        jmp++;
                    }

                }
                else
                {
                    if(jmp < 2*n || jmp == 0)
                    {
                        jmp++;
                    }
                    else if(jmp == 2*n)
                    {
                        turn++;
                        jmp--;
                    }
                }
                continue;
            }
            printf("X");    
        }
        printf("\n");
    }
    return 0;
}
