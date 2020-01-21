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
    printf("\n%d\t",a[0]);
	 for(i=1;i<n-1;i++)
    {
	printf("%d\t",(a[i-1]*a[i+1]));
	}
	printf("%d",a[n-1]);
return 0;
}
