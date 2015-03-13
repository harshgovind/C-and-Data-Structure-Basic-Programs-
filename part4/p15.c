/*Write a program to print out all rotations of a string typed in. For eg:if the input is
“Space”, the output should be: space paces acesp cespa espac
*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{
	int i,j,len;
	char a[100],b[100];
	printf("Enter the string:");
	gets(a);
	len=strlen(a);
	for(j=0;j<len;j++)
	{
		b[0]=a[0];
	//	a[len-1]=a[0];
		
	for(i=0;i<len;i++)
	{
	//	b[0]=a[len-1];
	//	a[len-1]=a[0];
		
		a[i]=a[i+1];
	
		
	}
	a[len-1]=b[0];
	puts(a);
	printf("\n");
	}
}
