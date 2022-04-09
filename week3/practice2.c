#include<stdio.h>

typedef struct score
{
    char name[20];
    int kor, eng, math;
    double avg;
}student;

int main(void)
{
    student s[5];
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%s %d %d %d",s[i].name,&s[i].kor,&s[i].eng,&s[i].math);
        s[i].avg = (s[i].kor+s[i].eng+s[i].math)/3.0;
    }

    for(i=0; i<5; i++)
    {
        printf("이름:%s 국어:%d 영어:%d 수학:%d 평균:%.1f\n",s[i].name,s[i].kor,s[i].eng,s[i].math,s[i].avg);
    }

    return 0;

}