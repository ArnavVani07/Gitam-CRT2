#include<stdio.h>
int main()
{
	int b[10],a[10],n,i=0,j=0,len;
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
	len=i--;
	while(i>=0)
	{
		b[j]=a[i];
		i--;
		j++;
	}
	printf("%d\t",b[0]);
for(i=1;i<len-1;i++)
{
	if((b[i-1]%2==0) && (b[i+1]%2==0))
	printf("%d\t",b[i]);
}
printf("%d",b[i]);
return 0;
}
