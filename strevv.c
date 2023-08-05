


#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[0];
	int i,l;
	printf("enter a name\n");
	gets(a);
	l=strlen(a);
	for(i=l;i>=0;i--)
	printf("%c",a[i]);
	
	getch();
	
}

