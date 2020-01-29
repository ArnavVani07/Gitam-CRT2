/*------------QUEUE IMPLEMENTATION----------
--------------USING ARRAY-------------------
--------------FIFO--------------------------
Enqueue----Insertion
Dequeue---Deletion
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int queue[5],f=-1,r=-1,ch,i;
	while(1)
	{
		system("CLS");
		printf("-----------QUEUE---------");
		printf("\n1.Enqueue");
		printf("\n2.Dequeue");
		printf("\n3.Display");
		printf("\n4.Exit");
		aa: printf("\nEnter your choice(1-4):");
		scanf("%d",&ch);
		switch (ch)
		{
		
			case 1:
			        if(r<4)
			       {
			       	r++;
			       	if(f==-1 && r==-1)
			       	f=0;
					printf("\nEnter Value:");
					scanf("%d",&queue[r]);  
					printf("\nValue Inserted");
				   }
				   else
				   printf("\nQueue is full");
				   getch();
				   break;
	        case 2:
	        	   if(f==-1 && r==-1)
	        	   printf("\nEmpty Queue");
	        	   else
	        	   {
				   
	        	  if(f==r)
	        	  {
	        	  	printf("\n%dDeleted",queue[f]);
	        	  	f--;
	        	  	r--;
	        	  	
				  }
				  else
				  {
				  	printf("\n%d Deleted",queue[f]);
				  	for(i=f+1;i<r;i++)
				  	queue[i-1]=queue[i];
				  	r--;
				  	f=0;
			      }
				  }
				  getch();
				  break;
	        case 3:
	        	    if(f==-1 && r==-1)
	        	   printf("\nEmpty Queue");
	        	  else
	        	  {
				  
	        	   printf("\nThe Queue is \n");
			       for(i=0;i<=r;i++)
				   printf("%d\t",queue[i]); 
	              }
				  getch();
	              break;
	        case 4:
	        	   return 0;
	        	   break;
	        default:
			        printf("\nSelection Error");
					goto aa;	   
	
}
}  

}

