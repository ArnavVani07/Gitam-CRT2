//Selection Sort Algorithm
/*
In this algorithm first n least elements are soreted in n iterations

*/
#include<stdio.h>
int Selection_Sort(int arr[],int n)
{
	int i,j,k,temp;
	for(i=0;i<n;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[k])
			{
				k=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[k];
		arr[k]=temp;
	}
	for (i=0;i<n;i++)
	printf("%d\t",arr[i]);
return 0;
}

int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	Selection_Sort(a,n);
	return 0;
}
