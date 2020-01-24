#include<stdio.h>
int InsertionSort(int a[],int n)
{
	int i,j,k,l;
	for(i=1;i<n;i++)
	{
		printf("\n");
		k=a[i];
		j=i-1;
		while(j>=0 && a[j]>k)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
		for(l=0;l<n;l++)
		printf("%d\t",a[l]);
	}
}
int main()
{
	int arr[]={5,4,3,2,1};
InsertionSort(arr,5);
return 0;
}

