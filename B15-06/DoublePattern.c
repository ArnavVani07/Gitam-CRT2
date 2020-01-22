#include<stdio.h>
int main()
{
	int a[5][5],r,c,i,j,sum=0;
	scanf("%d%d",&r,&c);
	for(i=2;i<=r+1;i++)
	{
		for(j=2;j<=c+1;j++)
		{
			scanf("%d",&a[i][j]);
        }
   }
for(i=0;i<=r+4;i++) 
{
	for(j=0;j<=c+4;j++)
	{ 
	
	 if(i==0 || j==0 || i==r+4 || j==c+4)
		printf("$");
		else if(i==1 || j==1 || i==r+2 ||j ==c+2)
		printf("*");
		else
		printf("%d",a[i][j]);
	}
printf("\n");
}
return 0;
}

