#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the values of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	d=(a>b && a>c)?a:b>c?b:c;
	printf("%d",d);
	return 0;
}
