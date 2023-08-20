#include<stdio.h>

main()
{
	int i,n,r;
	printf("enter the no whose table to print\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		r=n*i;
		printf("%d * %d = %d",n,i,r);
		printf("\n");
	}
	getch();
}
