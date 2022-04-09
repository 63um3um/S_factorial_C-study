#include<stdio.h>
#include<stdlib.h>

int my_strlen(char str[])
{
    int i;
    for(i=0; str[i] != '\0'; i++)
    {

    }
    return i;
}

void my_strcpy(char dst[], char src[])
{
    int i;
    for(i=0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return;
}

void space_to_null(char str[])
{
    int i;
    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '\0';
        }
    }
    return;
}

int my_strcmp(char s1[], char s2[])
{
    int i;
    int flag = 0;
    for(i=0; i<my_strlen(s2); i++)
    {
        if(s1[i] != s2[i])
        {
            flag++;
            break;
        }
    }
    return flag;
}


int main(void)
{
    int n;
    int i, j;
    int max_idx = 0;
    int max = 0;

    scanf("%d ",&n);

    char str[10][50];
    char max_str[50];
    char cmp[51];
    char opr[5];
    char op;

    for(i=0; i<n; i++)
    {
        gets(str[i]);//fgets(str[i], 50, stdin);
        if(my_strlen(str[i]) > max)
        {
            max = my_strlen(str[i]);
            max_idx = i;
        }
    }
    
    scanf("%s",cmp);
    scanf("%s",opr);

    int num = atoi(opr);
    // printf("%d",num);

    my_strcpy(max_str, str[max_idx]);

    int k=0;
    int idx = 0;
    int max_len = my_strlen(max_str);
    char max_words[50][50];

    space_to_null(max_str);

    while (idx < max_len)
    {
        my_strcpy(max_words[k++], max_str+idx);
        idx += my_strlen(max_str+idx)+1;
    }

    int flag = 0;
    char word[50] = {0,};

    for(i=0; i<k; i++)
    {
        for(j=0; j<=my_strlen(max_words[i])-my_strlen(cmp); j++)
        {
            if(!my_strcmp(max_words[i]+j,cmp) && flag == 0)
            {
                my_strcpy(word,max_words[i]);
                flag ++;
            }
        }
    }

    if(flag == 0)
    {
        printf("None");
        return 0;
    }

    for(i=0; word[i] != '\0'; i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
        {
            word[i] += num%26;
            if(word[i] > 'Z')
            {
                word[i] -= 26;
            }
            else if(word[i] < 'A')
            {
                word[i] += 26;
            }
        }
        else if(word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] += num%26;
            if(word[i] > 'z')
            {
                word[i] -= 26;
            }
            else if(word[i] < 'a')
            {
                word[i] += 26;
            }
        }
    }

    printf("%s",word);
    
    return 0;
}

/*
3
sejong unisersity
infomation security
security factorial
se
+2

3
uglqpi wpkxgtukva
qaewtkva hcevqtkcn
kphqtocvkqp ugewtkva iospdpo
v
-2

3
qchm le slgtcpqgrw
g ldmpkyrgml qcaspgrw
qcaspgrw
qcaz
+5
*/