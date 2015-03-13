/*Write program, which will print all numbers between 0 and 9, 20 and 29, 40 and 49,..., 80
and 89.[ hint: check condition ((x/10)%2)==0].*/

#include<stdio.h>
void main()
{
	int i,j,a;
	for(i=0;i<90;i++)
	{
		if(((i/10)%2)==0)	
		{
			printf("%5d",i);
		}
	}
	printf("\n");
}
