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
   		while(temp1 != NULL)
  		{
  			temp2 = temp1;
   			if( temp1 ->data > val)
          		temp1 = temp1->lchild;
     			else
        		temp1 = temp1->rchild;
  		}
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
void preorder(struct tnode *p)
{
	if(p != NULL)
        {
		printf("%d\t",p->data);
            	preorder(p->lchild);
		preorder(p->rchild);
	}
}
void postorder(struct tnode *p)
{
       if(p != NULL)
       {
		postorder(p->lchild);
       		postorder(p->rchild);
		printf("%d\t",p->data);
 	}
}

struct tnode *delete (struct tnode **p,int val)
{
	struct tnode *cur,*par,*z,*temp;
	cur=*p;
	int found;
	if(*p==NULL)
	{
		printf("list is empty");
		return;
	}
	par=NULL;
	/*search(p,val,&cur,&par,&found);*/
	//--cur;
	while(1)
	{
		if(cur->data==val)
			break;
		else if(cur->data<val)
			{par=cur;
			cur=cur->rchild;
			}
		else
			{par=cur;
			cur=cur->lchild;
			}
	}
/*	if(found==0)
	{
		printf("data not found");
	}*/

	if(cur->lchild==NULL &&   cur->rchild==NULL);
	{
		if(par->rchild==cur)
		par->rchild=NULL;
		else
		par->lchild=NULL;
		free(cur);
		return;
	}
	if(cur->lchild!=NULL && cur->rchild==NULL)
	{
		if(par->lchild==cur)
			par->lchild=cur->lchild;
		else            
			par->rchild=cur->lchild;
		free(cur);
		return;
	}
	if(cur->lchild==NULL && cur->rchild!=NULL)
	{
		if(par->lchild==cur)
			par->lchild=cur->rchild;
		else
			par->rchild=cur->rchild;
		free(cur);
		return;
	}
}
/*void search(struct tnode **p,int val,struct tnode **x,struct tnode **y,int *found)
{
	struct tnode *temp1;
	temp1=*p;
	*found=0;
	*y=NULL;
	while(temp1 != NULL)
        {
		if(temp1->data==val)
		{
			*found=1;
			*x=temp1;
		//	++(*x);
			return;
		}
		*y=temp1;
        	if( temp1 ->data > val)
                    temp1 = temp1->lchild;
                else
                    temp1 = temp1->rchild;
 	}
}*/
	
		



void main()
{
          struct tnode *root = NULL;
        int n,x,flag=0,a,val;


	for(;flag!=1;)
	{
		printf("  1.Create\n  2.Insert\n  3.Inorder\n  4.Preorder\n  5.Postorder\n  6.Exit\n 7.delete");
		scanf("%d",&a);
		printf("ur choice is= %d \n",a);
		
		switch (a)
		{
		case 1:
			{
			 printf("Enter the number of nodes: \n");
		        scanf("%d",&n);
        		while( n -- > 0)
        		{
                 		printf("Enter the data value: \n");
                		scanf("%d",&x);
                		root = insert(root,x);
        		}
			}
		break;
		case 2:
			{
				
                                  printf("Enter the new data value: \n");
                                scanf("%d",&x);
                                root = insert(root,x);
                        }
		break;
		case 3:
			{
				inorder(root);
				printf("\n");
			}
		break;
		case 4:
			{
                                preorder(root);
                                printf("\n");
                        }
		break;
		case 5:
			 {
                                postorder(root);
                                printf("\n");
                        }
		break;
		case 6:
			{
				flag=1;
			}
		break;
		case 7:
			{
				printf("Enter the value u want to delete:");
				scanf("%d",&val);
				delete(&root,val);
			}
		break;
		default:
			printf("wroung choice");
      		}
        
        }
}

