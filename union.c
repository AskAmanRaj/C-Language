union team
{
	int a;
	float b;
	char c;
	
};

main()
{
	union team s;
	s.a=10;
	s.b=10.2;
	s.c='a';
	printf("%d %f %c",s.a,s.b,s.c);
	getch();
}
