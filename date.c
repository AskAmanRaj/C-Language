#include<stdio.h>
main()
{
	int day,month,year,nd,nm,ny;
	int d1;
	int d2;
	int d3;
	do{
		  
		  
	d1==((0<day)&&(day<32));
	d2==((0<month)&&(month<13));
	d3==((1990<year)&&(year<2025));
	printf("Enter day month year like dd/mm/yyyy");
	scanf("%d/%d/%d",&day,&month,&year);
	}
	while(!d1||!d2||!d3);
	if(d1&&d2&&d3){
		if(day==31)
		nd=1;
		nm++;
		nd=year;
		printf("%d/%d/%d",nd,nm,ny);
		 if(month==12)
		nm=1;
		ny=year++;
}
	getch();
}
