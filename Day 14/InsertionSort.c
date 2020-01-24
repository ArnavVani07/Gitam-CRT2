/*Insertion Sort
In this first n elements are sorted in n iterations
*/
#include<stdio.h>
int InsertionSort(int a[],int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		k=a[i];
		j=i-1;
		while(j>=0 && a[j]>k)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
		
	}
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
int main()
{
	int a[]={1,7,-2,0,5};
	InsertionSort(a,5);
	return 0;
}
