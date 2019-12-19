#include<stdio.h>
int prime(int n)
{
	int i,fact=0;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		fact++;
	}
	if (fact==2)
	return 1;
	else
	return 0;
}

int main()
{
	int n,i=2,count=0,p;
	printf("Enter value of n");
	scanf("%d",&n);
	while(count<=n)
	{
		p=prime(i);
		if(p==1)
		{
		printf("%d",i);
		i++;
		count++;
	    }
	    else
	    i++;
	}
}
