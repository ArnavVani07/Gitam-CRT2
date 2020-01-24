/*
IP APPL8Ic98Tion
OP 16
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,len,sum=0;
	char x[100];
	scanf("%[^\n]s",x);
	len = strlen(x);
	while(i<len)
	{
		if(x[i]>=48 && x[i]<=57)
		{
			if((x[i]-48)%2==0)
			sum=sum+(x[i]-48);
		}
      i++;		
	}
	printf("%d",sum);
return 0;
}
