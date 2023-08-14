#include<stdio.h>
#include<stdlib.h>
 
 int main()
 {
  int n,i,max,min,*ptr;
  printf("enter the no of elements\n");
  scanf("%d",&n);
  ptr = (int *)malloc(n*sizeof(int));
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",(ptr+i));
  }
  for(i=1;i<n;i++)
  {
   if(*ptr<*(ptr+i))
  max=*(ptr+i);
  if(*ptr>*(ptr+i))
  min=*(ptr+i);
  }
  printf("max is %d\nmin is %d",max,min);
  free(ptr);
  return 0;
  }
