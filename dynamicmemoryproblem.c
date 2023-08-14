#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s=0,n,i,*ptr;
    printf("enter the no of elementd to add\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    printf("enter the elements to add\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",(ptr+i));
    }
    printf("sum of elements is :\n");
    for(i=0;i<n;i++)
    {
       s=s+*(ptr+i);
    }
    printf("\ns = %d",s);
    free(ptr);
    return 0;
}    
