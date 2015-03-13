/*Write program, which reads and integer X and prints an integer Y. Y is X+10 if x is between
10 and 30. Y is 3*X if X is between 50 and 70. Otherwise Y is X-2.*/

#include<stdio.h>
void main()
{
	int x;
	printf("Enter x=");
	scanf("%d",&x);
	if(x>10 && x<30)
	{
		printf("y=(x+10)=%d",x+10);
	}
	else
	{
	if(x>50 && x<70)
		printf("y=(3*x)=%d",x*3);
	else
		printf("y=(x-2)=%d",x-2);
	}
	printf("\n");
}
