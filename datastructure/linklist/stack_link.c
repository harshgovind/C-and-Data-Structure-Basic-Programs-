#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void main()
{
	struct node *top=NULL;
	int flag=0,n,value;
	
	for(;flag!=1;)
{
	printf("\nEnter choice:");
	printf("\n 1. PUSH\n 2. POP \n 3. EXIT\n");
	printf("Your choice is:");
        scanf("%d",&n);
switch(n)
{
 case 1:
	{
	printf("Enter the value:");
	scanf("%d",&value);
        push(&top,value);
	}
	break;

case 2:
	{
	pop(&top);
	
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

void push(struct node **top, int value)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("memory full\n");
		exit(0);
	}
	temp->data=value;
	temp->link=(*top);
	(*top)=temp;
}

void pop(struct node **top)
{
	struct node *temp;
	int value;
	if((*top)==NULL)
	{
		printf("empty list");
		return;
	}
	temp=(*top);
	value=(*top)->data;
	(*top)=temp->link;
	printf("\npopped value is %d\n",value);
	free(temp);

}
