


#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[10];
	int i,l;
	printf("enter a name\n");
	scanf("%d",&a);
	l=strlen(a);
	for(i=l;i>=0;i--)
	printf("%c",a[i]);
	
	getch();
	
}

