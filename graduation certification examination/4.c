#include<stdio.h>
#include<stdlib.h>

typedef struct exam
{
    int num;
    int first, second;
    double total;
}score;

int main(void)
{
    int n;
    int i, j;

    scanf("%d",&n);
    score *st = NULL;
    st = (score *)malloc(sizeof(score)*n);
    if(st == NULL) return -1;

    score *pass;
    pass = (score *)malloc(sizeof(score)*n);
    if(pass == NULL) return -1;
    
    score tmp;

    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&st[i].num, &st[i].first, &st[i].second);
        st[i].total = st[i].first*0.4 + st[i].second*0.6;
    }
    int pass_num = (int)(n*0.6);
    int pass2_num = (int)(n*0.8);
    int pass_cnt = 0;

    for(i=0; i<n-1; i++)
    {
        for(j=i; j<n; j++)
        {
            if(st[i].total < st[j].total)
            {
                tmp = st[i];
                st[i] = st[j];
                st[j] = tmp;
            }
        }
    } //sorting struct array
    double cutline = st[pass_num-1].total;


    for(i=0; i<n; i++)
    {
        if(st[i].total >= cutline)
        {
            pass[i] = st[i];
            pass_cnt++;
        }
    }
    if(pass_cnt < pass2_num)
    {
        for(i=pass_cnt; i<n-1; i++)
        {
            for(j=i; j<n; j++)
            {
                if(st[i].second < st[j].second)
                {
                    tmp = st[i];
                    st[i] = st[j];
                    st[j] = tmp;
                }
            }
        }

        for(i=pass_cnt; i<pass2_num-pass_num; i++)
        {
            pass[i] = st[i];
            printf("!\n");//디버깅 하는 중이ㅓㅆ음..
        }
        pass_cnt += pass2_num-pass_num;
    }

    for(i=0; i<pass_cnt-1; i++)
    {
        for(j=i; j<pass_cnt; j++)
        {
            if(pass[i].num > pass[j].num)
            {
                tmp = pass[i];
                pass[i] = pass[j];
                pass[j] = tmp;
            }
        }
    }

    for(i=0; i<pass_cnt; i++)
    {
        printf("%d\n",pass[i].num);
    }

    return 0;
}