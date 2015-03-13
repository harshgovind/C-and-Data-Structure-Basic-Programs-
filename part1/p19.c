/*Write program to print digits, which are multiple of 3. e.g. input 23617 output 6, 3.*/
#include<stdio.h>
void main()
{
	int n,a,b;
	a=0;
	printf("Progamme to show the number of digit divisible by 3");
	printf("Enter any number=");
	scanf("%d",&n);
	do
	{
		b=n%10;
		n=n/10;
		
		if(b%3==0)
			{
			printf("%d\n",b);
		        a=a+1;
			}
		
		
	}while(n!=0);
	if(a==0)
		printf("There is no number divisible by 3");
}
