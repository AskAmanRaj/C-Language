#include<stdio.h>

void main()
{
int n;
enum boolean result;
printf("enter a number");
scanf("%d",&n); 	
result=iseven(n);
if(result==true)
printf("evem ");
else
printf("false");
getch();
}


enum boolean iseven(int x)
{
	if(x%2==0)
	return(true);
	else
	return(false);
}

enum boolean
{
	false,true
};
