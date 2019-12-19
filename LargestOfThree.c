/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*************************************************************/
#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("%d is the largest number",a);
	else if (b>c && b>a)
	printf("%d is the largest number",b);
	else
	printf("%d is the largest number",c);
  
   
	return 0;

}