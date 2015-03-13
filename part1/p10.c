/*Write a program, which prints all even numbers between 20 and 70.*/
#include<stdio.h>
void main()
{
	int i;
printf("Even numbers between 20 to 70 \n");
  for( i=21;i<70;i++)
{
  if(i%2==0)
printf("%d \n",i);
}
}
