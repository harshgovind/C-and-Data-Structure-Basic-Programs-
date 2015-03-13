/*Write a program that converts a string like "124" to an integer 124.*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{
	int a,i;
	char b[100];
	printf("Enter any string:");
	gets(b);
	
	int k=strlen(b);
	 a=atoi(b);

//	for(i=0;i<k;i++)
	{
	        printf("%d",a);
		
	}

}
