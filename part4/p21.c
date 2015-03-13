/*Write a program to delete all vowels from a sentence. Assume that the sentence is
not more than 80 characters long.
*/
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
	 int i,j;
	 for(i=0;i<k-1;i++)
	 {
	   if((s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'))
	    {
	       if(s[i]!='/0')
		{
	      s[i]=' ';
	       
		}
	     }

	}
//	 printf("Vovels=");
	
//	 puts(s);

	for(i=0;s[i]!='\0';i++)
        {
                if(s[i]=='\t')
                {
                   s[i]=32;
                }
	}
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ' && s[i+1]==' ')
		{	
			for(j=i;s[j]!='\0';j++)
			{	
				s[j]=s[j+1];
				

			}
			--i;
		}
	}
	         
  	printf("The String after removing all vovels:\t");             
	
	puts(s);

	
}

