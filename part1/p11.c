/*Write a program, which prints all numbers between 20 and 40, and all even numbers
between 50 and 80
*/
#include<stdio.h>
void main()
{
	int a,b,c,i,j;
	for(i=21;i<40;i++)
	{
		printf("%4d",i);
	}
	printf("\n");
	for(j=51;j<80;j++)
	{
		if(j%2==0)	
		printf("%4d",j);
		continue;
	}
}
