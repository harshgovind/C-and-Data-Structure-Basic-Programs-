/*Write a program which will print all even numbers less than 50 and all odd numbers more
than 50.*/
#include<stdio.h>
void main()
{
	int a,b,c,i,j;
	for(i=0;i<100;i++)
	{
		
		
			if(i<50 && i%2==0 )
			printf("%5d",i);
			if(i>50 && i%2!=0)
			printf("%5d",i);
	}

}
