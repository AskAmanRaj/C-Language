
char* reverse(char*);

char* reverse(char *p)
{
   int i,l;
   char t;
   for(l=0;*(p+l)!='\0';l++);
   for(i=0;i<l/2;i++)
   {
   	t=*(p+i);
   	printf("%c",*(p+l-i-1));
   	printf("%c",*(p+i));
   	*(p+i)=*(p+l-1-i);
   	printf("\n");
   	//*(p+l-1-i)=t;
   }
   return p;
}
main()
{
	printf("%s",reverse("computer"));
	getch();
}
