#include<stdio.h>
#include<stdlib.h>
typedef struct node{
		     int data;
		     struct node *next;
		   }cql;	
void insert_queue(cql **last)
{
	cql *newnode;
	int value;
	newnode=(cql*)malloc(sizeof(cql));
	if((newnode)==NULL)
	{
		printf("No Enough Space in memory");
		return;
	}
	
        printf("\nEnter the value to be inserted in the queue:");	
	scanf("%d",&value);
    
        newnode->data=value;
        newnode->next=NULL;

        if ((*last)==NULL )
        { 
           (*last)=newnode;
            newnode->next=newnode;
            return;
         
        }

	newnode->next=(*last)->next;
	(*last)->next=newnode;
        (*last)=newnode;
}
void delet_queue(cql **last) 
{
     cql *temp=NULL;
     int data;
     if( (*last) == NULL)
     {
         printf("The queue is empty ...");
         return;
     }


     if((*last)==((*last)->next) )
     {
       temp = (*last);
       data =temp->data;
       printf("The deleted element  is %d",data);
       (*last)=NULL;
       free(temp);
       return;
     }

    temp= (*last)->next;
    (*last)->next = (*last)->next->next;
     data = temp->data;
     printf("The element deleted from the queue is %d",data);
     free(temp);
}

void main()
{
   
   cql *last=NULL;
   int option,flag=0;
   
   for(;flag==0;)
   {
   
       printf("\n==========================Circular Queue using LinkList ==============================\n");
       printf("\n1.INSERT");
       printf("\n2.DELETE");
       printf("\n3.EXIT");
       printf("\nENTER THE CHOICE: ");
       scanf("%d",&option);
       switch(option)
       {
		case 1: 
			insert_queue(&last);
			break;
		case 2:
			delet_queue(&last);
			break;
		case 3:
			flag=1;
	}
  }
}
