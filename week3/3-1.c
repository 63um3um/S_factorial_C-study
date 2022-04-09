#include<stdio.h>

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("data.txt", "r");
    double avg;
    char test[10];

    fseek(fp, 7,SEEK_SET);
    fgets(test,2,fp);
    printf("%s",test);


    return 0;

}