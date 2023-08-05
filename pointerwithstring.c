#include<stdio.h>



char* reverse(char *p)
{
	
	int i,l;
	char t,r;
	for(l=0;*(p+l)!='\0';l++);
	for(i=0;i<l/2;i++)
	{
		t=*(p+i);
		*(p+i) = *(p+l-1-i);
		*(p+l-1-i)=t;
	}
return(p);
}

int length(char *p)
{
	int i;
	for(i=0;*(p+i)!='\0';i++);
	return(i);
}
int length(char*);
char* reverse(char*);

main()
{
	
	printf("%d",length("computer"));
	printf("\n%s",reverse("computer"));
	getch();
	
	
}
