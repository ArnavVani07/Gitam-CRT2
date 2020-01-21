#include<stdio.h>
int main()
{
	int n,a[10],i=0;
	scanf("%d",&n);
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
	i--;
    while(i>=0)
    { 
      printf("%d\t",a[i]);
      i--;
    }
return 0;
}
