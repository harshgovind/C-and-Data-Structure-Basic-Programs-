/*Write program, which reads 2 numbers and prints the sum of square of the first and cube of
the second. Exa- input 5 3 output 5*5 + 3*3*3 = 52 .*/

#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
        printf("\n %d * %d + %d * %d * %d = %d",a,a,b,b,b,(a*a+b*b*b));
}
