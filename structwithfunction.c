struct book
{
	int bookid;
	char title[40];
	float price;
	
};
struct book input()
{
	struct book b;
	printf("enter bookid,title and price\n");
	scanf("%d %s %f",&b.bookid,&b.title,&b.price);
	return(b);
	
}
void display(struct book b)
{
	printf("\n%d %s %f",b.bookid,b.title,b.price);
}

void main()
{
	struct book b1;
	b1=input();
	display(b1);
	getch();
}
