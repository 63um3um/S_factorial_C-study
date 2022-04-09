#include<stdio.h>
#include<math.h>

struct complex
{
    double r;
    double i;
};

struct complex add(struct complex a, struct complex b)
{
    struct complex result;
    result.r = a.r+b.r;
    result.i = a.i+b.i;
    return result;
}

struct complex sub(struct complex a, struct complex b)
{
    struct complex result;
    result.r = a.r-b.r;
    result.i = a.i-b.i;
    return result;
}

void abs_val(struct complex *p1, struct complex *p2, struct complex *p3)
{
    double abs1, abs2, abs3;
    double tmp1, tmp2;
    
    abs1 = sqrt(pow(p1->r,2)+pow(p1->i,2));
    abs2 = sqrt(pow(p2->r,2)+pow(p2->i,2));
    abs3 = sqrt(pow(p3->r,2)+pow(p3->i,2));

    if(abs1 <= abs2 && abs1 <= abs3)
    {
        tmp1 = p2->r;
        tmp2 = p2->i;
        p2->r = p1->r;
        p2->i = p1->i;
        p1->r = tmp1;
        p1->i = tmp2;

    }
    else if(abs3 <= abs2 && abs3 <= abs1)
    {
        
        tmp1 = p2->r;
        tmp2 = p2->i;
        p2->r = p3->r;
        p2->i = p3->i;
        p3->r = tmp1;
        p3->i = tmp2;
    }

    if(abs2 >= abs1 && abs2 >= abs3)
    {
        p1->r = p2->r;
        p1->i = p2->i;
    }
    else if(abs3 >= abs2 && abs3 >= abs1)
    {
        p1->r = p3->r;
        p1->i = p3->i;
    }

}



int main(void)
{
    struct complex c1, c2, c3;
    scanf("%lf %lf",&c1.r,&c1.i);
    scanf("%lf %lf",&c2.r,&c2.i);
    scanf("%lf %lf",&c3.r,&c3.i);

    abs_val(&c1, &c2, &c3);
    struct complex a, s;
    a = add(c1,c2);
    s = sub(c1,c2);
    printf("%.1lf%+.1lfi\n",a.r,a.i);
    printf("%.1lf%+.1lfi",s.r,s.i);

    return 0;

} 