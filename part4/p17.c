/* Write a program that converts all lowercase characters in given string to its
equivalent uppercase character.
*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{
	char text[20];
	int i,len;
	printf("Enter a line of text :");
	scanf ("%[^\n]",text);
	len=strlen(text);
	for(i=0;i<len;i++)
	{
		if((text[i]>='a') && (text[i]<='z'))
		text[i]=text[i]+'A'-'a';
	}
	printf("converted text=%s",text);

}

