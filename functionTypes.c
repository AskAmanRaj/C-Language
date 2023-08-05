/* 1. return nothing ____(take nothing){};
 2. return nothing ____(take something){};
  3. return something ___(take nothing){};
  4. return something ____(take somthing){};
  */
  
  
  //1 number
  void add(){
       int i=2,j=4;
       printf("%d",i+j);
       }
 //2 number
 void sub(int a, int b){
      
      printf("\n%d",a-b);
      }
//3 number
 int mul(){
      int i=5,j=5,c;
      c= i*j;
      return c; 
      }
 //4 number
 int div(int k,int l){
     int o;
     o= k/l;
     return o;
     }
 
void main(){
     int w,q,s,x;
     printf("Enter the w value\n");
     scanf("%d",&w);
     printf("Enter the q value\n");
     scanf("%d",&q);
     add();
     sub(w,q);
     s=mul();
     printf("\n%d",s);
     x=div(w,q);
     printf("\n%d",x);
     getch();
     }
