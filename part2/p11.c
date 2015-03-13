/*Write program, which reads two numbers. The program finds the product of their first digits.*/
#include<stdio.h>
void main()
{
	int a,b,c;
    	printf("Enter a:");
	scanf("%d",&a);
	
	printf("Enter b:");
	scanf("%1d",&b);

	do
	{
		c=a%10;
		a=a/10;
	}while(a!=0);
	printf("product of 1st digit of a and b=%d",c*b);
}
