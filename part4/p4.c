/*Write a program to reverse a string using pointers*/
#include<stdio.h>
#include<string.h>
void reverse(char *,int b);
void main()
{
	char a[100];
	int len;
	printf("Enter the string:");
	scanf("%s",a);
	len=strlen(a);
	reverse(a,len);
	printf("\n");
	}
void reverse(char *a,int len)
{
	if (len==0)
	printf("%c",a[len]);
	else
	{
	printf("%c",a[len]);
	reverse(a,len-1);
	}
}
