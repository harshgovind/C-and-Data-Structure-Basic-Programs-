/*Use this function in a program that determines and prints all the prime numbers between 1
and 100.*/
#include<stdio.h>
void main()
{
	int n,i,count;
	for(n=1;n<=100;n++)
	{
		count=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
				count+=1;
		}
		if(count==2)
		{
			printf("\n%d",n);
		}
	}
}
