main()
{
	char a[3][10];
	int i;
	printf("enter three strings");
   for(i=0;i<3;i++)
	gets(&a[i]);
	
	for(i=0;i<3;i++)
	printf("%s\n",a[i]);
	getch();
	
}
