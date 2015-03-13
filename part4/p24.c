/* Write a program to count the number of occurrences of any two vowels in
succession in a line of text. For example, in the sentence
“Pleases read this application and give me gratuity”
such occurrences are ea, ea, ui.
*/
#include<stdio.h>
#include<string.h>
void main()
{

	char a[100];
	int i=0,n=0;
	printf("enter the string:");
	gets(a);
	while(a[i])
	{
		if((a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'))
			{
			if(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u')
				n++;
			}
		i++;
	}
	printf("\nNumber of vowels=%d",n);
}
