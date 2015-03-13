#include <stdio.h>
#define QUEUESIZE 10

void insert(int circular_arr[],int *front,int *rear)
{
   int value;
   
   if( ((*front)==0) && ((*rear)==QUEUESIZE-1))
   {
     printf("\nQueue is FULL");
     return;
   }

   if((*rear)<(*front))
   {
     if((*rear) == ( (*front)-1) )
     {
       printf("\nQueue is FULL");
       return;
     }
   }
   printf("Enter The Value: ");	
   scanf("%d",&value);
		
	    if( ((*rear)==QUEUESIZE-1) && ((*front)>0))
	{
		*rear=0;
		circular_arr[(*rear)]=value;
		return;
	}
    (*rear)++;
   if((*front)==-1)
	(*front)=0;
    circular_arr[(*rear)]=value;
    return;
}

void delete(int circular_arr[],int *front,int *rear)
{

	int value;
	if((*front)==-1 && (*rear)==-1)
	{
		printf("\nQUEUE IS EMPTY");
		return;
	}
	if((*front)==(*rear))
	{
		value=circular_arr[(*front)];
		printf("Deleted Value  is:%d",value);
		(*front)=(*rear)=-1;
		return;
	}
	value=circular_arr[(*front)];
	printf("Value deleted is: %d",value);
	(*front)++;

}

void main()
{
   int  circular_arr[QUEUESIZE];
  
   int flag =0,option,front=-1,rear=-1;
   for(;flag==0;)
   {
             
       printf("\n*****************************CIRCULAR ARRAY**********************************");
       printf("\n1.Insert  element ");
       printf("\n2.Delete  element ");
       printf("\n3.Exit..");
       printf("\nEnter above option:");
       scanf("%d",&option);
   
       switch(option)
       {
          
          case 1:
                  insert(circular_arr,&front,&rear);
                  break;
          case 2:
                  delete(circular_arr,&front,&rear);
                  break;
           case 3:
                 flag=1;
        }

    }

}
   
   
