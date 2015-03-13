/*Write program to delete last two digit. e. g. input 23617 output 2367.*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter any integer number:");
	scanf("%d",&a);
	b=a%100;
	a=a/100;
	a=a*10;
	b=b%10;
	c=a+b;
	printf("The required number is=%d",c);
}
	
