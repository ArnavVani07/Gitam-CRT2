/*
Queue as a linked list
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node
{
	int data;
	struct Node* next;
}*P,*C,*front,*rear;

void Insert()
{
	struct Node* nn= (struct Node*)malloc (sizeof(struct Node));
		printf("\nEnter Data:");
		scanf("%d",&nn->data);
		nn->next=NULL;
		if(front==NULL && rear==NULL)
	{
		front=nn;
		rear=nn;
	}
	else
	{
		rear->next=nn;
		rear=nn;
	}
printf("\nElement Inserted");
getch();
}

void Delete()
{
		if(front==NULL && rear==NULL)
	{
		printf("\nEmpty Queue");
	}
	else
	{
		C=front;
		front=C->next;
		printf("\n%d is Deleted",C->data);
	}
	getch();
}

void Display()
{
		if(front==NULL && rear==NULL)
	{
		printf("\nEmpty Queue");
	}
	else
	{
		C=front;
		while(C->next!=NULL)
		{
			printf("%d\t",C->data);
			C=C->next;
		}
	}
	printf("%d",C->data);
	getch();
}

int main()
{
	int ch;
	while(1)
	{
		system("CLS");
		printf("\n-------Queue----------");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		aa: printf("\nEnter Choice(1-4):");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				Insert();
				break;
			case 2:
				Delete();
				break;
			case 3:
				Display();
				break;
			case 4:
				return 0;
				break;
			default:
			       goto aa;	
	}
		}
	return 0;	
	}

