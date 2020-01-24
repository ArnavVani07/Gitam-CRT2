/*
IP: App test working good
OP: APP test WOEKING good
*/

#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0;
	char x[100];
	scanf("%[^\n]s",x);
	for(i=0;x[i]!='\0';i++)
	{
			if(x[i]==32)
		{ 
		count++;
	    }
	    if(count%2!=0)
	    {
	    	if(x[i]>=97 && x[i]<=122)
	    	printf("%c",x[i]-32);
	    	else
	    	printf("%c",x[i]);
		}
		else
		{
			if(x[i]>=65 && x[i]<=90)
	    	printf("%c",x[i]+32);
	    	else
	    	printf("%c",x[i]);
		}
    }
    return 0;
}
	
