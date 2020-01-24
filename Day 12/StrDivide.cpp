/*
whiteblackgreen 3 ----- white black green
pencil rubber 5--------  -1
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,div;
	char x[100];
	scanf("%[^\n]s",x);
	scanf("%d",&n);
	if (strlen(x)%n==0)
	{ div=strlen(x)/n;
		for(i=0;i<strlen(x);i++)
		{
			printf("%c",x[i]);
			if((i+1)%div==0)
			printf("\t");
		}
	}
	else
	printf("-1");
	return 0;
 }
