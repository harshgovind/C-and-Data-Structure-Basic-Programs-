#include <stdio.h>
#include <stdlib.h>
struct tnode
{
   	int data;
   	struct tnode *lchild, *rchild;
};

struct tnode *insert(struct tnode *p,int val)
{
   	struct tnode *temp1,*temp2;
   	if(p == NULL)
   	{
      		p = (struct tnode *) malloc(sizeof(struct tnode));
         	if(p == NULL)
           	{
      			printf("Cannot allocate\n");
      			exit(0);
          	}
       		p->data = val;
       		p->lchild=p->rchild=NULL;
   	}
  	else
  	{
   		temp1 = p;
   	//	while(temp1 != NULL)
  	//	{
  			temp2 = temp1;
     	//		if( temp1 ->data > val)
          //		temp1 = temp1->lchild;
     	//		else
        //		temp1 = temp1->rchild;
  	//	}
  		if( temp2->data > val)
  		{
 			temp2->lchild = (struct tnode*)malloc(sizeof(struct tnode));/*inserts the newly created node as left child*/
          		temp2 = temp2->lchild;
         		if(temp2 == NULL)
               		{
          			printf("Cannot allocate\n");
          			exit(0);
              		}
          		temp2->data = val;
          		temp2->lchild=temp2->rchild = NULL;
  		}
  		else
  		{
     			temp2->rchild = (struct tnode*)malloc(sizeof(struct tnode));
      			temp2 = temp2->rchild;
      			if(temp2 == NULL)
           		{
      				printf("Cannot allocate\n");
      				exit(0);
          		}
     			temp2->data = val;
     			temp2->lchild=temp2->rchild = NULL;
		}
	}
		return(p);
}

void inorder(struct tnode *p)
{
      if(p != NULL)
      {
	      inorder(p->lchild);
      		printf("%d\t",p->data);
         	inorder(p->rchild);
      }
}
void main()
{
	  struct tnode *root = NULL;
   	int n,x,flag;
   	printf("Enter the number of nodes\n");
   	scanf("%d",&n);
   	while( n -- > 0)
     	{
        	 printf("Enter the data value\n");
         	scanf("%d",&x);
         	root = insert(root,x);
    	}
     	inorder(root);
}
