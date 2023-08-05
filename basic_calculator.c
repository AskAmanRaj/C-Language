/* CALCULATOR BY AMAN */
main()
{
       int choice;
       double a,b,r;
       while(1)
       {
       printf("\n1.ADDITION");
       printf("\n2.SUBSTRACTION");
       printf("\n3.MULTIPLICATON");
       printf("\n4.DIVIDE");
       printf("\n5.exit");
       
       printf("\n\n\n\t\t\t\t\t ENTER YOUR CHOICE PLEASE ");
       scanf("%d",&choice);
       
       switch(choice)
       {
       case 1:
            printf("ENTER TWO NUMBERS\n");
            scanf("%lf\n%lf",&a,&b);
            r=a+b;
            printf("\nsum is %lf ",r);
            break;
            case 2:
                 printf("ENTER TWO NUMBERS\n");
                 scanf("%lf\n%lf",&a,&b);
                 r=a-b;
                 printf("\ndifference is %lf",r);
                 break;
                 case 3:
                      printf("ENTER TWO NUMBERS\n");
                      scanf("%lf\n%lf",&a,&b);
                      r=a*b;
                      printf("\nresult is %lf",r);
                      break;
                      case 4:
                           printf("ENTER TWO NUMBERS TO DIVIDE\n");
                           scanf("%lf\n%lf",&a,&b);
                           
                           if(a==0,b==0)
                           printf("not define");
                           else
                           printf("result is %lf",a/b);
                           break ;
                           case 5:
                                exit(0);
                                default:
                                        printf("\ninvalid choice");
                                        }
                                        getch();
                           
            
            }
            }
            
