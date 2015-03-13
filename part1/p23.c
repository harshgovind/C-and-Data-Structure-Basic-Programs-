/*Write program, which reads a number the find special sum. If number is 2314 then output is
4 + 14 + 314 + 2314 = 2646.*/
#include<stdio.h>

void main()
{
	int n,a=1,sum,b,c;
	sum=0;
	printf("Enter any number:");
	scanf("%d",&n);
	do
	{
		a=a*10;
		b=n%a;
	        c=n/a;
		sum=sum+b;
	}while(c!=0);
	printf("%d",sum);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
