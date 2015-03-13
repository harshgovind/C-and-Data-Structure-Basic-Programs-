#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void main()
{
	int q[MAX];
	int rear,front;
	int n,value,flag=0;
	rear=front=(-1);
	for(;flag!=1;)
{
	printf("\nEnter choice:");
	printf("\n 1. creat\n 2. delete \n 3. exit\n");
	printf("Your choice is:");
        scanf("%d",&n);
switch(n)
{
 case 1:
	{
	printf("Enter the value of queue elements:");
	scanf("%d",&value);
	
        insert(q,&rear,value);
	}
	break;

case 2:
	{
	delete(q,&front,&rear);
	
	}
	break;
case 3:
	{
		flag=1;
	}
	break;
default:
	{
		printf("you entered wrong choice");
	}
}
}
}

void insert(int q[],int *rear,int value)
{
	if(*rear<MAX-1)
	{
		(*rear)++;
		q[*rear]=value;
	}
	else
	{
		printf("q is full");
		exit(0);
	}
}
void delete(int q[],int *front,int *rear)
{
	int value;
	if(*front==*rear)
	{
		printf("empty\n");
		exit(0);
	}
	(*front)++;
	value=q[*front];
	printf("Deleted element=%d",value);
}
