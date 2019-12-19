#include<stdio.h>
int main()
{
	int n,i,num,rem,sum=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rem= n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
if(sum==num)
printf("Armstrong Number");
else
printf("Not an Armstrong Number");
}
