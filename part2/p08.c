/*Write program, which reads n , and n numbers. The program finds their sum. There is
comma(,) after n and between numbers. Input 5,2,3, 1,7, 9, output 2+3+1+7+9=22.*/

#include<stdio.h>
void main()
{
	int j,n,i,sum=0,a[100];
	printf("how many numbers do you want to enter?enter them serially:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf(",");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
        for(j=0;j<n;j++)
	{
         printf("%d",a[j]);
	
	}
	printf("sum=%2d",sum);
}
