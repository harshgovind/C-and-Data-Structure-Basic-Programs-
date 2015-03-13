/*Write a function that takes three integers, x, y, z and returns an integer smallest among
them.*/
#include<stdio.h>
void main()
{
 int x,y,z;
	printf("Enter the values of x,y,z:");
        scanf("%d%d%d",&x,&y,&z);
   if(x<y && x<z)
      printf("smallest number is=%d",x);
else
   if(y<x && y<z)
      printf("smallest number is=%d",y);
else
   if(z<x && z<y)
      printf("smallest number is=%d",z);
else
	printf("equal numbers");
  
}
