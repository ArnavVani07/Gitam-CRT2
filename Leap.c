/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*************************************************************/
#include <stdio.h>

int main()
{
	int a;
	printf("Enter the year");
	scanf("%d",&a);
	if(a%4==0)
	printf("Leap Year");
	else
	printf("Non Leap Year");

}