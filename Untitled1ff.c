main()
{
 double radius,area,circumference,diameter;
 printf("enter the radius of circle\n");
 scanf("%lf",&radius);
 area=3.14*radius*radius;
 printf("area of circle is %lf",area);
 circumference=2*3.14*radius;
 printf("\ncircumference is %lf",circumference);
 diameter=2*radius;
 printf("\ndiameter is %lf",diameter);
 
 getch();
}
