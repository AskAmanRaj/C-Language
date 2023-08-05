//take something return something

 int add(int a,int b)
 {
     int c;
     c=a+b;
     return(c);
     }
     
     main()
     {
           int x,y,s;
           printf("enter two number");
           scanf("%d%d",&x,&y);
            s=add(x,y);
            printf("sum is %d",s);
           getch();
           }
