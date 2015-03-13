/*Develop a program to calculate nPr and nCr given n and r*/
#include<stdio.h>
void main()
{	
	int fact(int *a);
	int n,r,i,j,nCr,nPr,n1,r1,n_r;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the value of r:");
	scanf("%d",&r);
	n1=fact(&n);
	r1=fact(&r);
	int d=n-r;
	n_r=fact(&d);
	nPr=n1/(n_r);
	nCr=n1/(r1*(n_r));
	printf("nPr=%d\n",nPr);
	printf("nCr=%d\n",nCr);
}
int fact(int *a)
{
	int i,f;
	for(i=*a,f=1;i>=1;i--)
		f=f*i;

	return(f);
	

}
	
