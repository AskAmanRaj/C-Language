#include<stdio.h>

 main()
{
	int i=1,n,*ptr;
	printf("enter the seats in bus\n");
	scanf("%d",&n);
	ptr = (int *)malloc(n*sizeof(int));
	printf("enter the seats fill y or Nfill N \n");
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		scanf("%d",(ptr+i));
		printf("   ");
		
	}

	
	getch();
}
