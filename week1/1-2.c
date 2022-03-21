#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    int i;
    int flag = 1;
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    
    return flag;

}

int main(void)
{
    int n;
    int tmp, cnt;
    scanf("%d",&n);
    
    tmp = n;

    if(!is_prime(n))
    {
        int i;
        int check = 1;
        printf("%d=",n);

        for(i=2; i<(n+1)/2; i++)
        {
            cnt = 0;

            while (tmp%i == 0)
            {   
                tmp/=i;
                cnt++;
            }
            if(cnt != 0)
            {
                check *= (int)pow(i,cnt);
                printf("%d^%d",i,cnt);
                if(!(check == n))
                {
                    printf("*");
                }
                
            }
        }
    }

    return 0;
}
