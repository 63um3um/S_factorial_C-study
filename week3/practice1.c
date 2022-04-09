#include<stdio.h>
#include<math.h>

struct dot
{
    double x, y;
};


int main(void)
{
    struct dot d1;
    struct dot d2;
    scanf("%lf %lf",&d1.x,&d1.y);
    scanf("%lf %lf",&d2.x, &d2.y);

    printf("%.2lf",sqrt(pow(d1.x-d2.x,2)+pow(d1.y-d2.y,2)));

    return 0;
}