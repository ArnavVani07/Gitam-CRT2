/*
Stack as a linked list
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node
{
	int data;
	struct Node* next;
}*S,*P,*C,*top;

void Push()
{
	printf("\n------------PUSH OPERATION---------");
	struct  Node* nn=(struct Node*)malloc(sizeof (struct Node));
	printf("\nEnter Value:");
	scanf("%d",&nn->data);
	nn->next=NULL;
	if(S==NULL)
	{
		S=nn;
		top=nn;
	}
	else
	{
		nn->next=top;
		top=nn;
		S=nn;
	}
printf("\nElement Pushed!");
getch();
}

void Peek()
{
	if(top==NULL)
	{
		printf("\nEmpty Stack!");
	}
	else
	{
	printf("\nPeek Elements is :%d",top->data);
	getch();
   }
}

void Display()
{
	if(top==NULL)
	{
		printf("\nEmpty Stack!");
	}
	else
	{
		C=top;
		printf("\nThe Stack IS\n");
		while(C->next!=NULL)
		{
			printf("%d\t",C->data);
			C=C->next;
		}
		printf("%d",C->data);
	}
	getch();
}

void Pop()
{
	if(S==NULL)
	{
		printf("\nEmpty Stack!");
	}
	else
	{
		C=top;
		top=top->next;
		S=top;
		printf("\n%d Poped!",C->data);
	}
getch();	
}

int main()
{
	int ch;
	while(1)
	{
		system("CLS");
		printf("----STACK OPERATION----");
		printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");
		aa: printf("\nEnter Your Choice(1-5):");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
			        Push();
			         break;
			case 2:
				    Pop();
			         break;
		    case 3: 
		            Peek();
			        break;
			case 4:
				    Display();
			        break;
			case 5:
			       return 0;
				   break;
			default:
			        goto aa;	            
		}
	}
}
