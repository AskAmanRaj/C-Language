#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n,i,newsize,*ptr;
   printf("enter the no of elements\n");
   scanf("%d",&n);
   ptr = (int *)malloc(n*sizeof(int));
   printf("enter the elements\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",(ptr+i));
   }
   printf("elements are\n");
   for(i=0;i<n;i++)
   {
      printf("%d\n",*(ptr+i));
   }
   printf("enter newsize\n");
   scanf("%d",&newsize);
   ptr = (int *)realloc(ptr,newsize);
   printf("now enter the elements\n");
   for(i=0;i<newsize;i++)
   {
      scanf("%d",(ptr+i));
   }
   printf("elements are\n");
   for(i=0;i<newsize;i++)
   {
      printf("%d\n",*(ptr+i));
   }
   free(ptr);
   return 0;
}   
