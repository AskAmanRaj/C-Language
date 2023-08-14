

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int choice,n,i,*ptr,s=0;
	while(1)
	{
	
	printf("YOU HAVE TWO OPTIONS");
	printf("\nENTER 1: for sum of n odd elements ");
	printf("\nENTER 2: for sum of n even elements");
	
	
	printf("\n\nEnter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			    printf("\nEnter the number of elements\n");
			    scanf("%d",&n);
			    ptr = (int *)malloc(n*sizeof(int));
			    printf("\nEnter the odd elements\n ");
			    
			    	for(i=0;i<n;i++)
			    	{
			    	scanf("%d",(ptr+i));
			    }
			    for(i=0;i<n;i++)
			    
				{
				
			    if((*(ptr+i)%2)==0)
			    {
			    	s=s+*(ptr+i);
			    }		
			
			else 
			{
				printf("please enter only odd value");
			}
	}
	printf("\nsum is %d",s);
		
				break;
		case 2:
				printf("\nEnter the number of elements\n");
				scanf("%d",n);
				ptr = (int *)malloc(n*sizeof(int));
				printf("Enter the even elements\n");
				for(i=0;i<n;i++)
				{
					if((*(ptr+i)%2)==0)
					{
						scanf("%d",(ptr+i));
					}
				}
					for(i=0;i<n;i++)
					{
						s=s+*(ptr+i);
						printf("\nsum is %d ",*(ptr+i));
					}
				
				free(ptr);
			    return 0;
	}
	
	
getch();	
}
}
