/*Write a program to read your name into a character array. Print the name along with
the length of your name and sizeof the array in which name is stored
*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{
	char a[50];
	int i,j,sum=0;
	printf("Enter name:");
	scanf("%s",a);
	j=strlen(a);
	for(i=0;i<j;i++)
	{
		sum=sum+sizeof(a[i]);
	}
	printf("\nlength=%d size=%d",j,sum);
}		
