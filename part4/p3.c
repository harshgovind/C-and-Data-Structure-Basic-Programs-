/*Develop a program to read lines and print only those containing a certain word .*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{
	int i,j,n,m,len,b;
	char a[40],str[10][40],temp[40],*p;
	printf("Enter the number of line u want to Enter:");
	scanf("%d",&n);
	printf("Enter %d lines=\n",n);
	for(i=0;i<n;i++)
	{
               __fpurge(stdin);
		gets(str[i]);

	}
	printf("\nEnter the world:");
	gets(a);
	printf("ur=%s\n",a);
	 printf("Your word containing strings are:\n");
	
     for(i=0;i<=n;i++)
	{
		m=0;
		m=strlen(str[i]);
		len=0;
		for(;len<=m;)
		{
		sscanf(str[i]+len,"%s",temp);
		len=strlen(temp)+len+1;
		if(strlen(temp)==strlen(a))
		{
			b=strcmp(temp,a);
			if(b==0)
			{
			
			puts(str[i]);
			}
		}
		}
		continue;
	}
}			
