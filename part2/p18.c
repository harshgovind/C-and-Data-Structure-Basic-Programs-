/*Write a program that will read a positive integer and print its binary equivalent*/
#include<stdio.h>
void showbits (int);
void main()
{
	int n,i;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n>=0)
	{
	printf("POSITIVE INTEGER\n ");
	printf("binary equivalent=");
	showbits(n);
	}
	else
	printf("NEGATIVE NUMBER");
}
void showbits(int n)
{
	int i,k,andmask;
	for(i=15;i>=0;i--)
	{
		andmask=1<<i;
		k=n & andmask;
		k== 0 ? printf("0"):printf("1");
	}
}
