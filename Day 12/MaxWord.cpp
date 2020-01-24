#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0,max=0,j=0,start,stop;
	char x[100];
	scanf("%[^\n]s",x);
	for(i=0;i<strlen(x);i++)
	{ 
	if(x[i]!=32)
	{
	
	count++;
	
	}else if(x[i]==32)
	{
		if(count>max)
			{
			stop=i;	
			max=count;
			start=i-count;
		}
		count=0;
	}
	
	}
	if(count>max)
	{stop=i;	
			max=count;
			start=i-count;
	
      
	}
printf("%d ",max);
for(i=start;i<stop;i++)
{
	printf("%c",x[i]);
}
return 0;
}

