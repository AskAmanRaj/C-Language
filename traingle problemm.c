#include<stdlib.h>
#include<stdio.h>
void main()
{
	int a,b,c,z;
	int c1,c2,c3;
	char isTriangle;
	printf("enter three side of triangle and to enter -1 with value \n");
	do{
	scanf("%d%d%d",&a,&b,&c);
	c1 = (a>0&&a<10);
	c2 = (b>0&&b<10);
	c3 = (c>0&&c<10);
	if(!c1){
		printf("triangle side a is not in range\n");
	}
		if(!c2){
		printf("triangle side b is not in range\n");
	}
		if(!c3){
		printf("triangle side c is not in range\n");
	}
	if(a==-1||b==-1||c==-1){
		exit(0);
	}
	}while(!c1||!c2||!c3);
	
	if((a<b+c)&&(b<c+a)&&(c<a+b)){
		isTriangle='y';
	}else{
		isTriangle='n';
	}
	if(isTriangle=='y'){
		if(a==b&&b==c&&c==a)
		printf("Equilatral Triangle\n");
		else if(a!=b&&b!=c&&c!=a)
		printf("Scalene triangle");
		else 
		printf("isoceles triangle");
	}else{
		printf("NOt a Triangle\n");
}

}
