//pointers
main()
{
	int x=5;
	int *j;
	j=&x;
	printf("%d\t%u\n",x,j);
	printf("%d\t%u\n",*j,&x);
	printf("%u",*&j);
	getch();
}
