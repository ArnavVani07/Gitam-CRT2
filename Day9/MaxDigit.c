#include<stdio.h>
int main()
{
	int n,max=0,rem;
	printf("Enter a number");
	scanf("%d",&n);
  do
	{
	 rem=n%10;
	 if(rem>=max)
	 max=rem;
	 
	 n=n/10;
	}  while(n!=0);
printf("Maximum digit is %d",max);
return 0;
}
