//dynamic memory allocation  
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int n,i,sum=0;
	int *ptr;
	
	printf("enter number of elements:");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));  //memory allocated
	
	if(ptr==NULL)
	{
		printf("error! memory not allocated");
		exit(0);
	}
	printf("enter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("sum=%d",sum);
     printf("\npress any key to exit");
	 getch();
	 	
}
