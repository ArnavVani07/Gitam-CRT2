#include<stdio.h>
int main()
{
	int a[5][5],r,c,i,j,sum=0;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
        }
   }
for(i=1;i<r-1;i++) 
{
	for(j=1;j<c-1;j++)
	{                       //if(i!=0 && i!=r-1 && j!=0 && j!=r-1)
	sum=sum+a[i][j];	
	}
}

printf("%d",sum);
return 0;
}

