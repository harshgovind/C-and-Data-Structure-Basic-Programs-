/*Write a recursive function that will generate and print the first n fibonacci
numbers.*/

#include<stdio.h>
void fibo(int ,int,int  );
int main()
{
	int i;
	printf("\nEnter the no of element to be printed::");
	scanf("%d",&i);
	printf("0 1 ");
	fibo(0,1,i-2);
	return 0;
}
void fibo(int prev,int current,int i)
{
	int next,j;
	next=prev+current;
	if(i!=0)
		{
		i--;
		printf("%d ",next);
		fibo(current,next,i);
		}
	else
		return;
}
	
	
