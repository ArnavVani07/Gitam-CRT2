#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("Enter Size Of Array:");
	scanf("%d",&n);
	printf("\nEnter The Elements:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	if(a[i]%2==0)
    	printf("\t 0");
    	else
    	printf("\t 1");
}
return 0;
}
