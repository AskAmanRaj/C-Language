#include<stdio.h>

   main()
{
	char a[10],y[10];
	char i,l,n;
	
	printf("enter number");
	gets(a);
	l=strlen(a);
	for(i=l;i>=0;i--)
{
printf("%c",a[i]);
}

printf("\n");
 if(a==y)
 {
 	printf("yes");
 }
 else{printf("no");
 }
	
getch();
}

