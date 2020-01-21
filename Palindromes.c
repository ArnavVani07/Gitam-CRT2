#include<stdio.h>
int reverse(int n)
{
	int rev=0,rem;
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10) +rem;
		n=n/10;
	}
return rev;
}
int main()
{
	int a[100],n,count=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==reverse(a[i]))
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
