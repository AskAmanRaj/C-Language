//take something return something
int add(int a,int b)
{
    int c;
    c=a+b;
    return(c);
}
int add(int,int);
void main()
{
     int s,x,y;
     printf("enter two numbers");
     scanf("%d%d",&x,&y);
     s=add(x,y);
     printf("sum is %d",s);
     getch();
     }
