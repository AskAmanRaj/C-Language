#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int l;
char a[20];
printf("enter your name");
gets(a);
l=strlen(a);
printf("length of %s is %d",a,l);
getch();
}
