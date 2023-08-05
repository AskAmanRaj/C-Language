main()
{
	int i,j,r,k,s,u;
	printf("enter no of rows to print");
	scanf("%d",&r);
	for(u=1;u<=r;u++)
	{
		printf(" ");
	}
	printf("*\n");
	for(i=r;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf(" ");
		}
		for(k=i;k<=r;k++)
		{
			printf("*");
		}
		for(s=i;s<=r;s++)
		{
			printf("*");
		}
		printf("\n");
	}
 getch();
}
