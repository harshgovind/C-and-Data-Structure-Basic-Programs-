/*Write program, which will print all numbers, which are either a multiple of 3 or 5 but not
both.*/
#include<stdio.h>
void main()
{
	int i,j,a,b;
	printf("Enter number upto which you want to extend the series=");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		if((i%3==0 || i%5==0) && i%15!=0)
		printf("%5d",i);
	}
}
