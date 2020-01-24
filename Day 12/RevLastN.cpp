/*
Dhyanahitha 4
Dhyanaatih
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int n,i,j,len;
	scanf("%s",str);
	scanf("%d",&n);
	len=strlen(str);
	if(n<len)
	{
		for(i=0;i<(len-n);i++)
		{
			printf("%c",str[i]);
		}
		for(j=len-1;j>=i;j--)
		{
			printf("%c",str[j]);
		}
	}
}
