/*Develop a C program which adds all numbers from 1 to N, except those which are
divisible by 5. Implement this using for loop and continue statement*/
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Addition of the numbers from 1 to n except the number divisible by 5\n");
	printf("Enter the last count:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%5==0)
			continue;
		sum=sum+i;
	}
	printf("\nsum=%d",sum);
}
