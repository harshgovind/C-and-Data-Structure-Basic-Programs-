/*Write the versions of the library functions strncpy, strncat, and strncmp, which
operate on at most the first n characters of their argument strings. For example,
strncpy(s,t,n) copies at most n characters of t to s.
*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>

void STRNCPY(char s1[] , char s2[], int n )
{
	int i;
	char t[50];
	for(i=0;i<n;i++)
	{
		t[i]=s2[i];
		s1[i]=t[i];
	}
	for(i=n;s1[i]!='\0';i++)
	{
		s1[i]=32;
	}
	printf("strncpy(string1,string2,n)=");
	puts(s1);
}
void STRNCMP(char s1[], char s2[], int n )
{
        int i,k,flag;
        char t[50];
	for(i=0;i<n;i++)
        {
               if((s1[i]==s2[i]))
		{
			flag=0;
		}
		if(s1[i]!=s2[i])
		{
			flag=s1[i]-s2[i];
			break;			
        	}
	}
	
       printf("strncmp(string1,string2,n)=%d\n",flag);
        
}
void STRNCAT(char s1[], char s2[], int n )
{
        int i,k;
        char t[50];
        k=strlen(s1);
	
	
        for(i=0;i<n;i++)
        {
                  
		s1[k+i]=s2[i];
		s1[k+n]=' ';
        }
	
       printf("strncat(string1,string2,n)=");
        puts(s1);
}
void main()
{
        char string1[50],string2[50],temp[50];
        int n,i;
        printf("Enter string1:");
        gets(string1);
        printf("Enter string2:");
        gets(string2);
        printf("How many characters of string 2 you want to copy to string1:");
        scanf("%d",&n);
       
        STRNCAT(string1,string2,n);
        STRNCMP(string1,string2,n);
	 STRNCPY(string1,string2,n);
        printf("\n");
}

