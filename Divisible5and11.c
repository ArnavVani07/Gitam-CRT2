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
	printf("Enter the three numbers");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	printf("Divisible by 5 and 11");
   else
   printf("Not Divisibleby 5 and 11");
	return 0;

}