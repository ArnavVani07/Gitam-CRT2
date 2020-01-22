#include<stdio.h>
int main()
{
	int a[10],n,i=0,j,len;
	scanf("%d",&n);
while(n!=0)
{
	a[i]=n%10;
	n=n/10;
	i++;
}
len=i--;
i=len-2;
while(i>=1)
{
	printf("%d",a[i]);
	i--;
}
	return 0;
}

