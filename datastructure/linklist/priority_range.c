#include<stdio.h>
#include<stdlib.h>
#define QMAX 10
typedef struct pqueue{
		int data;
		int pr;
	             }pq;
void insert_queue(pq *queue_arr,int *front,int *rear)
{
	int value,pri;

	if((*rear)==(QMAX-1))
	{
		printf("\nQueue is Full");
		return;
	}
	
	if((*front==-1)&&(*rear==-1))
	{
		printf("\nEnter The Value: ");
		scanf("%d",&value);
		
		printf("\nEnter The Priority: ");
		scanf("%d",&pri);

		if(pri<20)
			pri=1;
		else if(pri>=20&&pri<40)
			pri=2;
		else if(pri>=40 && pri<60)
			pri=3;
		else if(pri>=60 && pri<80)
			pri=4;
		else if(pri>=80 && pri<100)
			pri=5;
	
		(*front)++;
		(*rear)++;
	
		queue_arr[(*rear)].data=value;
		queue_arr[(*rear)].pr=pri;
	
		return;
	}

		printf("\nEnter The Value: ");
                scanf("%d",&value);
                
                printf("\nEnter The Priority: ");
                scanf("%d",&pri);
        
	 	if(pri<20)
                        pri=1;
                else if(pri>=20&&pri<40)
                        pri=2;
                else if(pri>=40 && pri<60)
                        pri=3;
                else if(pri>=60 && pri<80)
                        pri=4;
                else if(pri>=80 && pri<100)
			pri=5;	
	
		(*rear)++;
		queue_arr[(*rear)].data=value;
                queue_arr[(*rear)].pr=pri;
} 

void delete_queue(pq *queue_arr,int *front,int *rear)
{
	pq temp;
	int value,i,j;
	if((*front)==-1 && (*rear)==-1)
	{
		printf("\nQueue is empty: ");
		return;
	}

	for(i=(*front);i<=(*rear);i++)
	{
		for(j=i;j<=(*rear);j++)
		{
			if(queue_arr[i].pr < queue_arr[j].pr)
			{
				temp=queue_arr[i];
				queue_arr[i]=queue_arr[j];
				queue_arr[j]=temp;
			}
		}
	}
	
	if((*front)==(*rear))
	{
		 value=queue_arr[(*front)].data;
                 printf("\nValue Deleted; %d",value);
		 (*front)=(*rear)=-1;
		 return;

	}
	
	value=queue_arr[(*front)].data;
	(*front)++;
	printf("\nValue Deleted; %d",value);
	
}

void main()
{
	int front=-1,rear=-1;
	pq queue_arr[QMAX];
	int flag=0;
	int choice;
	for(;flag==0;)
	{
		printf("\n_______________________priority queue_________________________\n");
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Exit");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
				insert_queue(queue_arr,&front,&rear);
				break;
			case 2:
				delete_queue(queue_arr,&front,&rear);
				break;
			case 3:
				flag=1;
		}

	}
}


	










