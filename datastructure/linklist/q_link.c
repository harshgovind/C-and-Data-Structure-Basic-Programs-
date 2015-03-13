#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
        struct node *rear=NULL,*front=NULL;
        int n,value,flag=0;
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

        insert(&front,&rear,value);
        }
        break;

case 2:
        {
        delete(&front,&rear);
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
void insert(struct node **front,struct node **rear,int value)
{
	struct node *temp;
	
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	if(*rear==NULL)
	{
		(*rear)=temp;
		(*front)=(*rear);
	}
	else
	{
		(*rear)->next=temp;
		(*rear)=temp;
	}
}
void delete(struct node **front,struct node **rear)
{
	struct node *temp;
	if(*front==NULL)
	{
		printf("\nempty");
	}
	else
	{
		temp=*front;
		(*front)=temp->next;
		printf("Deleted item : %d",temp->data);
		free(temp);
	}
}
	
