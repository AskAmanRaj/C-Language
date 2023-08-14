#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i,*ptr;
printf("enter the no of element");
scanf("%d",&n);
ptr = (int *)malloc(n*sizeof(int));
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",(ptr+i));
}
printf("elements are...\n");
for(i=0;i<n;i++)
{
printf("%d\n",*(ptr+i));
}
free(ptr);
return 0;
}


