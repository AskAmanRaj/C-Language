main()

{ int choice,a,b,s;
while(1)
{
printf("\n1. addition");
printf("\n2. odd-even");
printf("\n3. printing N natural numbers");
printf("\n4. exit");

printf("\n\nenter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
     printf("enter two numbers");
     scanf("%d\n%d",&a,&b);
     s=a+b;
     printf("\nsum is %d",s);
     break;
     case 2:
       printf("enter a number\n");
       scanf("%d",&a);
       if(a%2==0)
           printf("even number");
       else
            printf("odd number");
            break;
     case 3:
          printf(" enter a number ");
          scanf("%d",&b);
          for(a=1;a<=b;a++)
          printf("%d",a);
          break;
          case 4:
               exit(0);
          default:
                  printf("invalid choice");
                  }
getch();
}
}
