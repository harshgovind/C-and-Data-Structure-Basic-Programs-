/*Write program which finds the sum of all those numbers, whose last digit is multiple of
three.( in above case ).*/
#include<stdio.h>
void main()
{
	int a[100],c[100],sum=0,n,i;
    	printf("How many numbers do you want to enter:");
	scanf("%d",&n);
	printf("Enter the number:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
		c[i]=c[i]%10;
		if(c[i]%3==0)
			sum=sum+a[i];
	}
	printf("SUM=%d",sum);
}
