/*Write a C program with a recursive function itoa, which converts integer into a string*/
#include<stdio.h>
#include<string.h>
void itoa1(char *,int );
void main()
{
	char ch[10];
	int i,l;
	printf("Enter the integer:\t");
	scanf("%d",&i);
	itoa1(ch,i);
	printf("\nString=");
	puts(ch);
}
void itoa1(char *t,int i)
{
	int j;
	static int m;
	j=i%10;
	j=j+0x30;
	i=i/10;
	if(i)
	itoa1(t,i);
	*(t+m)=j;
	*(t+m+1)='\0';
	 m++;
}
