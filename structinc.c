#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[100];
	int rollno;
	int age;
	float marks;
	
};

void main()
{
	struct student s;
	int i,j=65;
	//scanf("%s",&s.name);
	for( i=0;i<25;i++){
		s.name[i]=j;
		j++;
	}
	s.rollno=24;
	s.age=15;
	s.marks=80.00;
	
	printf("%s %d %d %f",s.name,s.rollno,s.age,s.marks);
	getch();
	
}
