/*
Ip: Abc xyz OP:Axbycz
IP: Abcd xy  OP: abxycd
IP:ab xyza   OP:axbyza
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
	
	  }	
	  while(str1[i]!='\0')
	  {
	  	printf("%c",str1[i++]);
	  }
	  while(str2[j]!='\0')
	  {
	  	printf("%c",str2[j++]);
	  }
return 0;
}
