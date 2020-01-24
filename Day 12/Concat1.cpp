/*
Ip: Mango eat OP: Me
                 aa
                nt
                g*
                o*
*/

#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0;
	char str1[25],str2[25];
	scanf("%s%s",str1,str2);
	printf("\n");
      while(str1[i]!='\0' && str2[j]!='\0')
	  {
	  	printf("%c",str1[i++]);
	  	printf("%c",str2[j++]);
	    printf("\n");
	  }	
	  while(str1[i]!='\0')
	  {
	  	printf("%c",str1[i++]);
	  	printf("*");
	  	printf("\n");
	  }
	  while(str2[j]!='\0')
	  {
	  		printf("*");
	  	printf("%c",str2[j++]);
	  printf("\n");
	  }
return 0;
}
