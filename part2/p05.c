/*Write program, which prints sum of all factors. E.g. if given number is
        24 ( 2+3+4+6+8+12+24=59)*/
#include<stdio.h>
void main()
{
	int i,num,sum=0;
	printf("Enter any number=");
	scanf("%d",&num);
	printf("Factors of %d are=",num);
	for(i=2;i<=num;i++)
	{
		if((num%i)==0)
		{
			sum=sum+i;
			printf("%3d",i);
		}
	}
	printf("\nsum of factors=%d",sum);
}	
