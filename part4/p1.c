/*Using pointers, write a function that receives a character string and a character as
argument and deletes all occurrences of this character in the string. The function
should return the corrected string with no holes .
*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void del(char * , int * , char *);
void main()
{
	char s[100],a;
	int n;
	printf("Enter the strin:");
	scanf("%s",s);
	__fpurge(stdin);
	printf("Your string is %s",s);
	n=strlen(s);
	printf("\nEnter the charctor u want to delete:");
	scanf("%c",&a);
	printf("\nYour charactor is=%c",a);
	del(&a,&n,s);
}
void del(char *a , int *b, char *s)
{
	int i,j=0;
	printf("\n");
	printf("New string is=");
	for(i=0;i<=(*b);i++)
	{
		if(*a!=s[i] && *a!='\0')
		{
		s[j]=s[i];
		printf("%c",s[j]);
		j++;
		}
		else
		continue;
	}
	
//	printf("ur strin=%s",s);
}
				
		
