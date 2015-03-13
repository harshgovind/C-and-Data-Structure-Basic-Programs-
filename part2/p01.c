/*Write a Program to find if a given number is armstrong number. (153 = 1^3 + 5^3 +
3^3)*/

#include<stdio.h>
void main()
{
	int n,num,d,sum=0;
	printf("Enter any number:");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		d=num%10;
		sum=sum+d*d*d;
		num=num/10;
	}
	if(sum==n)
	{
		printf("Number is armstrong number.\n");
	}
	else	
	{
		printf("Number is not armstrong number.\n");
	}
}
