 #include<stdio.h>

fun()
{
  int i,*j;

  j=&i;

  j++;
  j++;
  j++;

  *j=*j+13; //to skip first printf +13


  *j=*j+21; //to skip first and second printf +21 ie. 21 + 13

  *j=*j+13; //to skip first,second,third printf +13 ie. 21 + 13 + 13
}

main()
{
  int a;
  a=5;

  fun();
  printf("hello1");
  printf("\n%d\n",a);
  printf("hello2");
}

