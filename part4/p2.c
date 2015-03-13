/*Write a program to extract a portion of a character string and print the extracted
string. Assume that m characters are extracted, starting with nth character .
*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{
	char s[100];
	int i,j=0,k,a,b;
	printf("Enter the string:");
	gets(s);
	__fpurge(stdin);
	k=strlen(s);
	printf("Enter the range of charactors u wat to extract[form... ...to]:");
	scanf("%d %d",&a,&b);
	if(b>k)
		printf("invalid number");
	else
	



	{
		char s1[100];
		for(i=a;i<=b;i++)
		{
			s1[j]=s[i];
			j++;
		}
		printf("Required string is=%s",s1);
	}
}
	

