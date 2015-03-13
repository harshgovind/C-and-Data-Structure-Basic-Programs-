/*Write a program to count the number of ‘e’ in the following array of pointer to the
string.
char * s [ ] = {
                 “we will teach you how to “ ;
                 “Move a mountain “ ;
                 “Level a building “ ;
                 “Erase the past “;
  “Make a million “ ;
}
*/
#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
void main()
{
	char * s[ ]={
                 "we will teach you how to ", 
                 "Move a mountain " ,
                 "Level a building " ,
                 "Erase the past ",
                 "Make a million " 
		};


         int count=0;
	int n,i,j;

	for(i=0;i<5;i++)
		{

			for(j=0;*(s[i]+j)!='\0';j++)
			{
				if(*(s[i]+j)=='e')
				{
					count++;
				
				}
			}
		}
				printf("%d ",count);

	
}

