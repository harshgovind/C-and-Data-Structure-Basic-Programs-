#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 100
int main()
{
	int stack[STACKSIZE];
	int top,flag=0,n,value;
	top=-1;
	for(;flag!=1;)
{
	printf("Enter choice:");
	printf("\n 1. PUSH\n 2. POP \n 3. EXIT\n");
	printf("Your choice is:");
        scanf("%d",&n);
switch(n)
{
 case 1:
	{
	printf("Enter the value:");
	scanf("%d",&value);
        push(stack,&top,value);
	}
	break;

case 2:
	{
	pop(stack,&top);
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
void push(int stack[],int *top, int value)
{
	if(*top==(STACKSIZE-1))
	{
		printf("\nstack is full\n");
		exit(0);
	}
	(*top)++;
	stack[(*top)]=value;
}

void pop(int stack[],int *top)
{
	int temp;
	if((*top)==-1)
	{
		printf("stack is empty");
		exit(1);
	}
	temp=stack[*top];
	(*top)--;
	printf("poped value is %d\n",temp);
}

