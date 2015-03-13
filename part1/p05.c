/*Write a function that determines if a number is prime.*/
#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count+=1;
	}
	if(count==2)
	{
		printf("\nPrime number");
	}
	else
	{
		printf("\nThe number is not prime");
	}
}
