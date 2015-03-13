/*Write program, which reads a number and finds the sum of digits in its factorial. If given
number is 6 then the answer is 9 because 6! = 720.*/
#include<stdio.h>
void main()
{
	int i,num,sum=0,a;
	long fact;
	printf("Enter an integer:");
	scanf("%d",&num);
	for(fact=1,i=num;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("\nFactorial of %d=%ld",num,fact);                                      
	
	do
	{
		a=fact%10;
		fact=fact/10;
		sum=sum+a;
	}while(fact!=0);
	printf("\nsum of digits=%d",sum);

}
