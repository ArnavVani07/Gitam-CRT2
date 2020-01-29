/*
DOUBLE LINKED LIST
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
	int data;
	struct Node *next ,*previous;
}*S=NULL,*L=NULL,*C=NULL;

void InsertStart()
{
	struct Node* nn=(struct Node *)malloc(sizeof(struct Node));
	printf("\nEnter Data:");
	scanf("%d",&nn->data);
	nn->next=NULL;
	nn->previous=NULL;
	if(S==NULL)
	{
		S=nn;
		L=nn;
	}
	else
	{
		S->previous=nn;
		nn->next=S;
		S=nn;
	}
	getch();
}

void InsertEnd()
{
	struct Node* nn=(struct Node *)malloc(sizeof(struct Node));
	printf("\nEnter Data:");
	scanf("%d",&nn->data);
	nn->next=NULL;
	nn->previous=NULL;
	if(S==NULL)
	{
		S=nn;
		L=nn;
	}
	else
	{
		L->next=nn;
		nn->previous=L;
		L=nn;
	}
getch();
}
void InsertAsc()
{
struct Node* nn=(struct Node *)malloc(sizeof(struct Node));
	printf("\nEnter Data:");
	scanf("%d",&nn->data);
	nn->next=NULL;
	nn->previous=NULL;
	if(S==NULL)
	{
		S=nn;
		L=nn;
	}
	else if(nn->data < S->data)
	{
	   S->previous=nn;
		nn->next=S;
		S=nn;
	}	
	else if(nn->data > L->data)
	{
		L->next=nn;
		nn->previous=L;
		L=nn;
	}
	else
	{
		S=C;
		while(nn->data > C->data)
		{
			C=C->next;
		}
		nn->previous=C;
		nn->next=C->next;
		
	}
	
	getch();
}

void InsertPos()
{
	int pos,i=1,flag=0;
	printf("\nInsert Position:");
	scanf("%d",&pos);
	struct Node *nn=(struct Node*)malloc(sizeof(struct Node));
	printf("\nEnter Value");
	scanf("%d",&nn->data);
	nn->next=NULL;
	nn->previous=NULL;
	C=S;
	while(i<pos-1)
	{
		C=C->next;
		i++;
		if(C->next==NULL)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		nn->previous=C;
		nn->next=C->next;
	}
	else if(flag==1)
	{
		
	}

getch(); 
}

void DisplayF()
{
	if(S==NULL)
	printf("\nEmpty List");
	else
	{
		printf("\nThe List\n");
		C=S;
		while(C->next!=NULL)
		{
			printf("%d\t",C->data);
			C=C->next;
		}
	printf("%d\t",C->data);
	}
	
	
	getch();
}

void DisplayB()
{
	if(S==NULL)
	printf("\nEmpty List");
	else
	{
		printf("\nThe List\n");
		C=L;
		while(C->previous!=NULL)
		{
			printf("%d\t",C->data);
			C=C->previous;
		}
	printf("%d\t",C->data);
	}
	
	getch();
}


int main()
{
	int ch,o;
	while(1)
	{
		system("CLS");
		printf("\n------------Double Linked List----------");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\nEnter Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n1.InsertEnd\n2.InsertBegin\n3.Insert Ascending\n4.Insert at Position\nEnter Choice(1-4):");
				scanf("%d",&o);
				if(o==2)
				   InsertStart();
				  else if(o==1)
				  InsertEnd();
				  else if(o==3)
				  InsertAsc();
				  else if(o==4)
				  InsertPos(); 
				  break;
			case 2:
			       break;
			case 3:
				   printf("\n1.Forward\n2.Backward\nEnter Choice(1-2):");
				   scanf("%d",&o);
				   if(o==1)
				   DisplayF();
				   else if(o==2)
				   DisplayB();
			       break;
			case 4:
			        return 0;
					break;
						   	  
		}
	}
}
