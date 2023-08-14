#include<stdio.h>
#include<stdlib.h>

int main()
{

int i,n,s1=0,s2=0,*ptr;
printf("enter the no of elements\n");
scanf("%d",&n);
ptr = (int *)malloc(n*sizeof(int));
printf("enter the elements\n");
for(i=0;i<n;i++)
{ 
 scanf("%d",(ptr+i));
 if(*(ptr+i)%2==0)
 {
 s1=s1+*(ptr+i);
 }
 else
 {
s2=s2+*(ptr+i);
}
}
printf("sum of even = %d\nsum of odd = %d",s1,s2);
free(ptr);
return 0;
}
