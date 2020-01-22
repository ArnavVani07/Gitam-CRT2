#include<stdio.h>
#include<math.h>
int main()
{
	int a[10][10],r,c,fsum=0,i,j,rsum=0;
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
		if(i+j==r-1)
		{
			rsum=rsum+a[i][j];
		}
		if(i==j)
		{
			fsum=fsum+a[i][j];
		}
	}
}
printf("%d",abs(rsum-fsum));
return 0;
}

