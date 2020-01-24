/*
Dhyanahitha 4
ayhDnaatih
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
		for(i=n-1;i>=0;i--)
		{
			printf("%c",str[i]);
		}
		for(i=n;i<(len-n);i++)
		{
			printf("%c",str[i]);
		}
		for(j=len-1;j>=i;j--)
		{
			printf("%c",str[j]);
		}
	}
}
