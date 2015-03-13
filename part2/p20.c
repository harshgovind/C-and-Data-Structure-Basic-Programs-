/*Develop a program to sort n strings. Use array of pointers.*/

#include<stdio.h>

main()
{

char *str[]={
		"rahul",
		"aniket",
		"mayur",
		"piyush"
	   };

int i,j;
char *temp;
for(i=0;i<4;i++)
{
	for(j=i+1;j<4;j++)
	{

	if(strcmp(str[i],str[j])>0)
		{
			
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		}
	}
}


for(i=0;i<4;i++)
printf("%s\n",str[i]);
}


