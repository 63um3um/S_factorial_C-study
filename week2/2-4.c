#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(void)
{
    int n;
    int i, j;

    scanf("%d ",&n);

    char **str = NULL;
    str = (char **)malloc(sizeof(char *)*n);
    if(str == NULL) return -1;

    for(i=0; i<n; i++)
    {
        str[i] = (char *)malloc(sizeof(char) * 101);
        gets(str[i]);//fgets(str[i], 100, stdin);
    }

    char max_str[101];
    char min_str[101];

    int max = 0, min = 102; //strlen %lu

    for(i=0; i<n; i++)
    {
        if(max < strlen(str[i]))
        {
            max = strlen(str[i]);
            strcpy(max_str,str[i]);
        }
        if(min > strlen(str[i]))
        {
            min = strlen(str[i]);
            strcpy(min_str,str[i]);
        }
    }
    
    char max_words[100][100], min_words[100][100];
    int idx=0, max_len, min_len;

    max_len = strlen(max_str);
    min_len = strlen(min_str);
    
    for(i=0; i< max_len; i++)
    {
        if(max_str[i] == ' ')
        {
            max_str[i] = NULL;
        }
    }
    int k = 0;
    while (idx < max_len)
    {
        strcpy(max_words[k++],max_str+idx);
        idx += strlen(max_str+idx)+1;
    }
    int max_wnum = k;

    idx = 0;
    for(i=0; i< min_len; i++)
    {
        if(min_str[i] == ' ')
        {
            min_str[i] = NULL;
        }
    }
    k=0;
    while (idx < min_len)
    {
        strcpy(min_words[k++],min_str+idx);
        idx += strlen(min_str+idx)+1;
    }
    int min_wnum = k;

    char max_word[100] = "A";
    char min_word[100] = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";

    // strcpy(max_word, max_words[0]);
    // strcpy(minZ_word, max_words[0]);

    for(i=0; i<max_wnum; i++)
    {
        if(strlen(max_word) < strlen(max_words[i]))
        {
            strcpy(max_word, max_words[i]);
            //printf("1 test %d, %s %s\n", strlen(max_words[i]), max_words[i], max_word);
        }
        else if(strlen(max_word) == strlen(max_words[i]) && strcmp(max_word, max_words[i]) < 0)
        {
            strcpy(max_word, max_words[i]);
        }
    }

    for(i=0; i<min_wnum; i++)
    {
        if(strlen(min_word) > strlen(min_words[i]))
        {
            strcpy(min_word, min_words[i]);
        }
        else if(strlen(min_word) == strlen(min_words[i]) && strcmp(min_word, min_words[i]) > 0)
        {
            strcpy(min_word, min_words[i]);
        }
    }
    
    printf("%s\n",min_word);
    printf("%s",max_word);

    return 0;
}
/*
3
you make me smile
c language midterm exam
i see you

2
why so serious
icecream makes everything better

2
aaaaaaaaaaaaaaaaaaaaaaaaaa aaaaaaaaaaaaaaaaaaaaaaaaab
cccccccccccccccccccccccccccccccccccccccccccccccccccc
*/
