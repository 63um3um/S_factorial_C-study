#include<stdio.h>

int main(void)
{
    int n, m;
    int i, j;
    int cnt = 0;

    scanf("%d",&n);
    double avg[n];
    int people[n][1000];

    getchar();
    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        if(m == 0)
        {
            avg[i] = -1;
            continue;
        }

        cnt = 0;
        avg[i] = 0.0;

        for(j=0; j<m; j++)
        {
            scanf("%d",&people[i][j]);
            avg[i] += people[i][j];
        }
        avg[i] /= (double)m;
        for(j=0; j<m; j++)  
        {
            if(people[i][j] < avg[i])
            {
                cnt++;
            }
        }
        avg[i] = (double)cnt/m*100;
    }

    for(i=0; i<n; i++)
    {
        if(avg[i] == -1)
        {
            continue;
        }
        printf("%.3lf%%\n",avg[i]);
    }

    return 0;
}
