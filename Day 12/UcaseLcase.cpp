/* ASCII VALUES
A-Z : 65-90
a-z : 97-122
0-9 : 48-57
space: 32
--------------------------------
IP: AppLicaTION
OP: U:4 L:8
*/

#include<stdio.h>
int main()
{
	int    i,uc=0,lc=0,len=0;
	char x[100];
	scanf("%[^\n]s",x);
	for(i=0;x[i]!='\0';i++)
	{
		len++;
		if(x[i]>=65 && x[i]<=90)
		uc++;
		else if (x[i]>=97 && x[i]<=122)
		lc++;
	}
	printf("%d\n\n",len);
	printf("U:%d  L:%d",uc,lc);
}
