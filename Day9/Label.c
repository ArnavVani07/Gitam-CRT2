/*goto is a jump statement
there are two types of labels
Forward Label:
   goto labelname:
   --------------- .
   -----------
   ----------
   Labelname:
             defination
   
   Backward Label:
   
   labelname: 
             defination
-----------------------------------------------
--------------------------------------------
---------------------------------------

			 	goto labelname;*/
#include<stdio.h>
int main()
{
	printf("LINE 1\n");
	printf("LINE 2\n");
	printf("LINE 3\n");
	goto aa;
	aa:
		printf("Line in label");
	
	
	return -0;
				 }			 	
			 	
			 	
						           
