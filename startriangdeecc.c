main()
{
	int i,j,r,k;
	printf("enter no of rows to print");
	scanf("%d",&r);
	for(i=r;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf(" ");
		}
		for(k=3;k>0;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
