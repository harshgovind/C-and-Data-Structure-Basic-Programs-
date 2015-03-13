/*Write a C program with a function tolower, which converts upper case letters to
lower case. Use conditional expression
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char a[40];
	int i,j,k;
	puts("Enter the string:");
	gets(a);
	for(i=0;(a[i])!='\0';i++)
	{
		if((a[i]>='A') && (a[i]<='z'))
		{
	      //  int s = tolower(a[i]);
                	printf("%c",tolower(a[i]));
		}
	}
	
}
