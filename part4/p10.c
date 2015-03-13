/*Write a program to display all the vowels in a given line of text.*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{ 
	 char s[40],s1[20];
	 printf("Enter the string:");
	 gets(s);
	 __fpurge(stdin);
	 int k=strlen(s);
	 int i,j=0;
	 for(i=0;i<k-1;i++)
	 {
	   if((s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'))
	    {
	       if(s[i]!='/0')
		{
	       s1[j]=s[i];
	       j++;
		}
	     }

	}
	 printf("Vovels=");
	for(j=0;j<strlen(s1);j++)
	{
	 putc(s1[j]);
	}
}

