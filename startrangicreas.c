main()
{
	int i,r,j;
	printf("enter number of rows to print");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
