#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	int s1,s2,s3;
	char istriangle;
	do{
	
	printf("enter three side of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	s1=(a>0);
	s2=(b>0);
	s3=(c>0);
	if(!s1||!s2||!s3){
	printf("triangle not possible from given sides\n\n\n");
}
}while(!s1||!s2||!s3);
if((a<b+c)&&(b<a+c)&&(c<a+b))
{
istriangle='y';
}
else{istriangle='n';

}
if(istriangle=='y'){

if(a==b&&b==c&&c==a)
printf("equilateral triangle");
else if(a!=b&&b!=c&&c!=a)
printf("scalen triangle");
else
printf("isoceles triangle");
}else {printf("triangle not possible");
}
getch();
}


