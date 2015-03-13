/*Write program, which will find sum of product to consecutive digits. e.g. when the input is
23145 the output is 2*3 + 3*1 + 1*4 + 4*5 = 33.*/

#include<stdio.h>

void main()
{
	int n,i,a,b,c,j,array[100],sum=0,prod;
	printf("Enter number of digits of your number:");
	scanf("%d",&b);                                        
	printf("Enter any number=");
	scanf("%d",&n);
	c=b;
	do
	{
		a=n%10;
		n=n/10;
		array[b-1]=a;
		b--;
	}while(n!=0);
	/*for(i=0;i<c;i++)
	{
	printf("%5d",array[i]);
	}*/
	for(j=0;j<c-1;j++)
	{
		prod=1;
		prod=array[j]*array[j+1];
		sum=sum+prod;
	}
	printf("sum=%d\n",sum);
}	
		
	
