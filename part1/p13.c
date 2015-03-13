/*Write program, which print all even number between 20 and 40, and all odd numbers
between 50 and 80.*/
#include<stdio.h>
void main()
{
	int a,b,c,i,j;
	for(i=21;i<80;i++)
	{
		
		
			if(i<40 && i%2==0 )
			printf("%5d",i);
			if(i>50 && i%2!=0)
			printf("%5d",i);
	}

}
