//triangle problem
#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter three sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a=b,b=c,c=a)
	{
	printf("equilateral triangle");
	}
	else
	{
	printf("scalen triangle");
	}
	
}
