#include<stdio.h>
void main()
        {
int i,j,k;
for(k=4;k>=0;k--)
 {char ch='A';
  for(j=k;j>=0;j--)
   { ch++;
     for(i=0;i<=j;i++)
	{
	putchar(ch+i-1);
	      
	}
    }
printf("\n");
}
}
