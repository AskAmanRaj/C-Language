#include<stdio.h>
#include<stdbool.h>
main()
{
	int i,n,r;
	printf("enter the number \n");
	scanf("%d",&n);
	bool prime = false;
	for(i=2;i<n;i++)
	{
	if(n%i==0)
	{
	
	prime = true;
	break;
}
	
}
	if(prime)
	{
		printf(" non prime number");
	}
	else{
		printf(" prime number");
	}

	getch();
}
