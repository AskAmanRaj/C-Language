#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,*ptr,max,min;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	ptr = (int *)malloc(n*sizeof(int));
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
	
		scanf("%d",(ptr+i));
			if(i==0){
max=*(ptr+i);
min=*(ptr+i);

		}
		if(*(ptr+i)>max)
		max=*(ptr+i);
	
		if(*(ptr+i)<min)
		min=*(ptr+i);
		
	}
	printf("max is %d and min is %d",max,min);
	free(ptr);
	return 0;
	getch();
}
