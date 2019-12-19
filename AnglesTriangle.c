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
	printf("Enter the angles of the triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>=c && a+c >=b && b+c>=a && a+b+c==180)
	printf("The given angles can form a triangle");
else
printf("The given angles can not form a triangle");
}