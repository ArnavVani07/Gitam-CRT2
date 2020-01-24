/*
IP : ORANGE
OP : PUBOIF
*/
#include<string.h>
#include<stdio.h>
int main()
{
	char x[100];
	int i,len;
	scanf("%s",x);
	for(i=0;i<strlen(x);i++)
	{
		if(x[i]=='A' || x[i]=='E' ||x[i]=='I' ||x[i]=='O' ||x[i]=='U' ||x[i]=='a' ||x[i]=='e' ||x[i]=='i' ||x[i]=='o' ||x[i]=='u' )
		{
			x[i]+=1;
		}
			else if((x[i]>=66 && x[i]<=68) || (x[i]>=98 && x[i]<=101))
			{
				x[i]='E';
			}
		else if((x[i]>=70 && x[i]<=72)||(x[i]>=102 && x[i]<=104)) 
		{
			x[i]='I';
			}	
			else if((x[i]>=74 && x[i]<=78)||(x[i]>=106 && x[i]<=110))
			{
				x[i]='O';
			}
			else if((x[i]>=80 && x[i]<=84)||(x[i]>=111 && x[i]<=115))
			{
				x[i]='U';
				
			}
		else if((x[i]>=86 && x[i]<=90)||(x[i]>=117 && x[i]<=122))
		{
			x[i]='A';
		}
	}
	
	printf("\n%s",x);
	return  0;

}
