/* Takes something returns nothing */
void add(int a,int b)//formal arguements
{
  int c;
  c=a+b;
  printf("sum is %d",c);
     
 }
 
 
void main()
 {
    int x,y;
    void add(int,int);
    printf("enter two number ");
    scanf("%d%d",&x,&y);
    add(x,y);  //actual arguements
     getch();        }
}
