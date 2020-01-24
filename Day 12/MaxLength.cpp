/*
IP: HI Good Morning Morning have a good day
OP:7 (Highest count)
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0,max=0;
	char x[100];
	scanf("%[^\n]s",x);
	for(i=0;i<strlen(x);i++)
	{ 
	if(x[i]!=32)
	count++;
	else if(x[i]==32)
	{
		if(count>max)
			max=count;
		count=0;
	}
	
	}
	if(count>max)
	max=count;
printf("%d",max);
return 0;
}
     
