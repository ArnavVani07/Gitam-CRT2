/*---------LINKED LIST--------------
-----------Dynamic implementation---
LL has two parts
Data value
Address of next node//for last node of the list its null
Insert- Start,End,particular position
Delete- Start,End,particular position
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node{
	int data;
	struct Node*next;
}*s,*l,*c,*p;
//Start Last Current Previous
void Pos()
{
	int x,pos=1,flag=0;
	printf("\nEnter Element to be searched for:");
	scanf("%d",&x);
	c=s;
	while(c!=l)
	{
		if(c->data==x)
		{
			flag=1;
			break;
		}
		else
		{
			pos++;
			c=c->next;
		}
	}
	if(flag==1)
	printf("\nPosition of %d is %d",x,pos);
	else
	printf("\nElement Not Found");
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
	c=s;
	while(i<pos-1)
	{
		c=c->next;
		i++;
		if(c->next==NULL)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
	
	p=c;
	c=c->next;
	p->next=nn;
	nn->next=c->next;
}
else if(flag==1)
{
	l->next=nn;
	l=nn;
}
}

void InsertEnd()
{
	struct Node *nn=(struct Node*)malloc(sizeof(struct Node));
				 printf("\nEnter Value");
				 scanf("%d",&nn->data);
		         if(s==NULL)
		         {
				   s=nn;
				   c=nn;
		          }
				 else
		         {
		         	c=l;
		         	
		         	c->next=nn;
		         	nn->next=NULL;
		         }
				 
				 l=nn;

getch();				 
}

void Display()
{
	if(s==NULL)
		printf("\nEmpty Linked List");
	else
	{
	printf("\nThe Linked List is\n");
				struct Node*n=(struct Node*)malloc(sizeof(struct Node));
				n=s;
				while(n!=l)
				{
					printf("%d-->",n->data);
					n=n->next;
				}
				printf("%d",n->data);
			    }
			    
getch();
}
void Delete()
{
	if(s==NULL)
			    printf("\nEmpty Linked List");
			    else
			    {
				
				struct Node*n=(struct Node*)malloc(sizeof(struct Node));
				n=s;
				while(n!=l)
				{
					p=n;
				}
				n=p->next;
				printf("%d Deleted",n->data);
				l=p;
			    }
getch();			    
}
int main()
{
	s=l=c=p=NULL;
	int i,k,ch;
	while(1)
	{
		system("CLS");
		printf("-----Linked Lists-----");
		printf("\n1.Insert");
		printf("\n2.Display");
		printf("\n3.Delete");
		printf("\n4.Exit\n5.Search");
		printf("\nEnter your choice(1-4):");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				printf("\n1.Insert At End\n2.Insert at a specific Position\nEnter Choice(1-2):");
				scanf("%d",&k);
				if(k==1)
				InsertEnd();
				else if(k==2)
				InsertPos();
				
				 break;
			case 2:
				Display();
			    break;
			case 3:
				Delete();
				break;   
			case 4:
			       return 0;
				   break;
			case 5:
			       Pos();
				   break;	   
			default: 
			       printf("\nSelection Error!");	   	 
		}
	}
}

