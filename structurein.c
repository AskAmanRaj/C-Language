 struct date
 {
 	int d,m,y;
 	 
 };
 void main()
 {
 	struct date today,d1;
 	today.d=26;
 	today.m=7;
 	today.y=2018;
 	d1=today;
 	printf("date--%d/%d/%d",d1.d,d1.m,d1.y);
 	getch();
 }
