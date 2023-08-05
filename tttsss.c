//next date problem
main()
{
	int dd,mm,yyyy,nd,nm,ny;
	printf("enter the date like dd/mm/yyyy");
	scanf("%d/%d/%d",&dd,&mm,&yyyy);
	if(dd=31)
	{
	nd=1;
	nm++;
}
      else
      {
	printf("next date is %d/%d/%d",nd,nm,ny);
}
	getch();
	
}
