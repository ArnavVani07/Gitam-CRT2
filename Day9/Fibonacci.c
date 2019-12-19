#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter value of n");
	scanf("%d",&n);
	printf("\nFibonaccci Series:%d\t%d",a,b);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
}
