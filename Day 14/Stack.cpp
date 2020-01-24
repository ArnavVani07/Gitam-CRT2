/*---------------STACK IMPLEMENTATION------------
PUSH
POP
PEEK
*/
#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
	int stack[5],top,ch,x;
	while(1)
	{
		system("CLS");
		printf("-----------------STACK MENU-----------------------");
		printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");
		aa:printf("\nEnter Your Choice(1-5):");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(top<=4)
				{
				printf("\nEnter The Value:");
				scanf("%d",&stack[top]);
				top++;
				printf("\nElement Inserted!");
		        }
		        else
		        printf("\nStack Overflow");
		        getch();
				break;
		    case 2:
		    	if(top==-1)
		    	printf("\nStack Underflow");
		    	else
		    	{
		    		printf("%d is poped from the stack",stack[top]);
				    top--;
				}
				getch();
				break;
			case 3:	
			        if(top==-1)
                   	printf("\nStack Underflow");		
			        else
			        printf("Peek element is %d",stack[top]);
			        getch();
			        break;
			case 4:
				     if(top==-1)
                   	printf("\nStack Underflow");		
			       else
			       {
				   for(x=top;x>=0;x--)
				   printf("\n%d",stack[x]);
			       }
			       getch();
			       break;
			case 5:
			return 0;
			default: printf("\nSelection error!");
			           goto aa;	
	}
}

}
