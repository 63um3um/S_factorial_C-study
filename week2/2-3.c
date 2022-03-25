#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[1002];
	char b[1002];
	char op;
	int i;
	int of=0;
	
	scanf("%s %c %s",a,&op,b);
	
	if(op == '-' && !strcmp(a,b))
	{
		printf("result: 0");
		return 0;
	}
	
	int alen = strlen(a);
	int blen = strlen(b);
	int len;
	
	if(alen < blen)
	{
		len = blen;
		int tmp = alen-1;
		for(i=blen-1;tmp>=0; i--)
		{
			a[i] = a[tmp--];
		}
		memset(a,'0',(blen-alen)*sizeof(char));
	}
	else if(alen > blen)
	{
		len = alen;
		int tmp = blen-1;
		for(i=alen-1; tmp>=0; i--)
		{
			b[i] = b[tmp--];
		}
		memset(b,'0',(alen-blen)*sizeof(char));
	}
	else
	{
		len = alen;
	} // setting 자릿수 
	
	if(op == '+')
	{
		for(i=len-1; i>=0; i--)
		{
			a[i] += b[i] - '0';
			if(a[i] > '9' && i>0)
			{
				a[i] -= 10;
				a[i-1]++;
			}
			else if(a[i] > '9' && i==0)
			{
				a[i] -= 10;
				of = 1; //overflow flag
			}
		}
			
	}
	else //op == '-'
	{
		for(i=len-1; i>=0; i--)
		{
			a[i] -= (b[i] - '0');
			if(a[i] < '0' && i>0)
			{
				a[i] += 10;
				a[i-1]--;
			}
		}
		
	}
	
	int check_zero = 0;
	printf("result: ");
	if(of == 1)
	{
		printf("1");
		check_zero++;
	}
	for(i=0; i<len; i++)
	{
		if(check_zero == 0) check_zero += a[i]-'0';
		if(check_zero == 0)
		{
			continue;
		}
		printf("%c",a[i]);
	}
		
	return 0;
}