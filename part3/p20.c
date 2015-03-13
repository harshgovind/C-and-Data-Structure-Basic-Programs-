#include<stdio.h>
void main()
{
int a[6]={101,102,106,124,220,820},i,j;
int k=5;
for(i=5;i>=0;i--)
	{
          for(j=0;j<=k && k>=0;j++)
		{
 		printf("%6d",a[j]);
		}
		k--;
		printf("\n");
	}
		
}
          







