/*
IP: Ap TeSt NoT WorKing
OP: TEST
Second word to be printed in caps
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0;
	char x[100];
	scanf("%[^\n]s",x);
	for(i=0;i<strlen(x);i++)
	{
		if(x[i]==32)
		{ 
		count++;
	    }
	    if(count==1)
	    {
	    	if(x[i]>=97 && x[i]<=122)
	    	{
	    		printf("%c",x[i]-32);
			}
			else 
			{
				printf("%c",x[i]);
			}
		}
		if(count==2)
		break;
		
		}
	
	return 0;
}
