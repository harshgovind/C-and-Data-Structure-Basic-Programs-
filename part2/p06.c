/*Write program, which reads a number and print PRIME if the given number is prime. If the
given number is not a prime then COMPOSITE is printed. (Hint: Smallest factor of prime
number is equal to itself).*/
#include<stdio.h>
void main()
{
	int i,num,sum=0;
	printf("Enter any number=");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if((num%i)==0)
		{
			sum=sum+i;

		}
	}
	if(sum==num)
	printf("\nPRIME NUMBER\n");
	else
	printf("\nCOMPOSITE NUMBER\n");
}	
