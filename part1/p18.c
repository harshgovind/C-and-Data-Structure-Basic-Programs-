/*Write program to print the sum of digits. e.g. input 23516 the output 2+3+5+1+6=17.*/
#include<stdio.h>

void main()
{
	int n,sum,a;
	sum=0;                                        
	printf("Enter any number=");
	scanf("%d",&n);
	do
	{
		a=n%10;
		n=n/10;
		sum=sum+a;
	}while(n!=0);
	printf("sum of digits=%d",sum);
}	
		
	
