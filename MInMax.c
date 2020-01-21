#include<stdio.h>
int main()
{
	int a[100],n,i,max,min;
	printf("Enter Size Of Array:");
	scanf("%d",&n);
	printf("\nEnter The Elements:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
	for(i=1;i<n;i++)
    {
    	if(a[i]>max)
    	max=a[i];
    	else if(a[i]<min)
    	min=a[i];
	}
	printf("\n\nMAx=%d\nMin=%d",max,min);
	return 0;
}
