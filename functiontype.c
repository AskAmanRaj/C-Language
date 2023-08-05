//take nothing return something
int add()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    return(c);
    
}

void main()
{
     int s;
     s=add();
     printf("sum is %d",s);
     getch();
     }
