/*Write a program to sort a set of names stored in an array in alphabetical order.*/
#include<stdio.h>
#include<string.h>

void main()
{
	char a[5][50];
	char temp[50];
	int i,j,n;
	printf("Enter The Number of Names: ");
	scanf("%d",&n);
	printf("Enter The Names to be sorted:\n ");
	for(i=0;i<n;i++)
	{	
		printf("%d",(i+1));
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[i]);
				strcpy(a[i],temp);
			}
			
		}	
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n%d.",(i+1));
		printf("%s",a[i]);
	}
	
}
