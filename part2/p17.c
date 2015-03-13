/*Write program, which reads a number and finds how many times the first digit occurs. If the
number is 34533253 then the answer is 4 since the first digit (3) occurs 4 times. [ Hint:
declare long int x; and Read number using scanf(“%ld”,&x);]*/
#include<stdio.h>
void main()
{
	long int x;
 	printf("Enter x:");
	scanf("%ld",&x);

	int sum,a,array[100],b=0,digit,i,count=0;
	sum=0;                                        
	
	do
	{
		a=x%10;
		x=x/10;
		array[b]=a;
		b++;
	}while(x!=0);
	digit=array[b-1];	
	for(i=b-1;i>=0;i--)
	{
		if(digit==array[i])
			count++;
	}
	printf("\nTotal number of %d :%2d\n",digit,count);
	
	
}
