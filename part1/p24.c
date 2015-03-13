/*Write program, which reads a number the finds special product. If number is 2314 then
output is 4 + 1*4 + 3*1*4 + 2*3*1*4 = 44.*/
#include<stdio.h>

void main()
{
	int n,i,a,b,c,j,array[100],sum=0,prod=1;
	printf("Enter number of digits of your number:");
	scanf("%d",&b);                                        
	printf("Enter any number=");
	scanf("%d",&n);
	c=0;
	do
	{
		a=n%10;
		n=n/10;
		array[c]=a;
		c++;
	}while(n!=0);
	
	for(i=0;i<c;i++)
	{
		prod=prod*array[i];
		sum=sum+prod;
	}		
	printf("\nRequired output is=%d",sum);
}	
	
