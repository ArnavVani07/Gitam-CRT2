#include<stdio.h>
int main()
{
	int root,sum,i,rem;
	long long int n;
	printf("\Enter a value:");
	scanf("%lld",&n);
	sum=0;
	while(1)
	{
		
	    rem=n%10;
		sum=sum+rem;
		n=n/10;
		if(sum>9)
		{
			n=sum;
			sum=0;
		}
		else
		{
			root=sum;
			break;
		}
	}
	
	printf("\nRoot Value:%d",root);
return 0;
}
