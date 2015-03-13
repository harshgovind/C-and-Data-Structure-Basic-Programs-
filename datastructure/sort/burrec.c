#include<stdio.h>
void main()
{
	int i,j,n,a[100],tem;
	printf("Enter total of numbers you want to enter:");
	scanf("%d",&n);
	printf("Enter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("ur no.");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
	check( &i ,& a[i],n);
	}
	printf("sorted list:");
	for(i=0;i<n;i++)
        {
                printf("\t%d",a[i]);
        }
	printf("\n");
}
      void check(int m ,int *a[m],int *k)
      {	
	if(*a[m]>*a[m+1] && m<k)
	{
	int c;
 	c=a[m];
	a[m]=a[m+1];
	a[m+1]=c;
	}	
	check((m+1),a[m+1],k);
      }

	
