/*Write program to print the kth digit from last. e.g. input 23687 and k=3 output 6.*/
#include<stdio.h>

void main()
{
	int a,b,c=1,i;
	printf("Enter any integer number:");
	scanf("%d",&a);
	printf("which digit from the left do u want to print: ");
	scanf("%d",&b);
	for(i=1;i<b;i++)
	{
		c=c*10;
	}
	a=a/c;
	a=a%10;
	printf("The required number is=%d",a);
}
	
