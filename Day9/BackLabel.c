#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number");
	scanf("%d",&n);
	i=1;
	aa:
		printf("%d\t",i);
		i++;
		if(i<=n)
		goto aa;
		
return 0;		
}
