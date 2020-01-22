#include<stdio.h>
int main()
{
	int a[5][5],r,c,i,j,oc=0,ec=0;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
        }
   }
for(i=0;i<r;i++)
	{ oc=ec=0;
		for(j=0;j<c;j++)
		{
	if(a[i][j]%2==0)
		ec++;
		else
		oc++;
		
	    }
	printf("\n%d %d",ec,oc);
	}
return 0;

}
