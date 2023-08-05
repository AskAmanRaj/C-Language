int main()
{
	int i;
	struct student 
	{
		int rollno;
		char name[30];
		int age;
		
	};
	
	struct student stud[5];
	for(i=0;i<=4;i++)
	{
		printf("student %d",i+1);
		stud[i].rollno=i+1;
		printf("\nenter the name");
		scanf("%s",stud[i].name);
		printf("\nenter age");
		scanf("%d",stud[i].age);
		
	}
	for(i=0;i<=4;i++)
	{
		if(stud[i].rollno==2)
		{
		printf("student %d\n",i+1);
		printf("rollno is %d\n",stud[i].rollno);
		printf("name is %s",stud[i].name);
		printf("age is %d",stud[i].age);
	}
}
}
