struct tuition
{
	int rollno;
	float marks;
	char name[15];
	
};

main()
{
	int l;
	printf("Enter the number of student to register");
	scanf("%d",&l);
	struct tuition s[l];
	int i;
	
	for(i=1;i<=l;i++)
	{
		printf("enter roll no = 0, for done\n\n");
	printf("enter roll no\n");
	scanf("%d",&s[i].rollno);
	if(s[i].rollno==0)
	break;
	else
	printf("enter marks of student\n");
	scanf("%f",&s[i].marks);
	printf("enter name of student\n");
	scanf("%s",&s[i].name);
	printf("\n\n");	
	
}
for(i=1;i<=l;i++)
{
	if(s[i].rollno==0)
	break;
	else
	printf("\n\n");
	printf("student %d\n",i);
	printf("rollno is %d\n",s[i].rollno);
	printf("marks is %f\n",s[i].marks);
	printf("name is %s\n",s[i].name);
	printf("\n\n\n");
}
getch();
}
