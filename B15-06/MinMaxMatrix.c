#include<stdio.h>
int main()
{
	int a[5][5],r,c,i,j,min,max;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
        }
   }
for(i=0;i<r;i++)
	{ min=max=a[i][0];
		for(j=0;j<c;j++)
		{
	if(a[i][j]>max)
		max=a[i][j];
		else if(a[i][j]<min)
		min=a[i][j];
		
	    }
	printf("\n<%d ,%d>",min,max);
	}
return 0;
}


