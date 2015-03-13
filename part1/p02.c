/*Write a program to swap contents of two variables without using third variable.*/
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the values of a&b:");
	scanf("%d %d",&a,&b);
	printf("values of a and b before swapping:%d  %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapped values of a and b are:%d,%d\n",a,b);
}
