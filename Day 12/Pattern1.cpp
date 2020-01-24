/*
ABCD
AABBCC
ABCDABCD
-----OP-----
!@@!!!@@@@
!@!!@@!!!@@@@
!@@!!!@@@@!@@!!!@@@@

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],prev='$';
	int i,count,j;
	scanf("%[^\n]",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==32)
		{
		prev='$';
		printf("\n");
		}else
		{
				count=str[i]-64;
			if(prev=='@')
			{
			    for(j=0;j<count;j++)
				printf("$");
                prev='$'; 			
			}
			else if(prev=='!')
			{
				for(j=0;j<count;j++)
				printf("@");
                prev='@';
			
			}
			else if(prev=='$')
			{
				for(j=0;j<count;j++)
				printf("!");
                prev='!'; 			
	 			
			}
		}
	}
}
