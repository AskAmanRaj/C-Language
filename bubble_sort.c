main()
{
	int a[]={34,15,29,8};
	
	int i;
	bubble_sort(a,4);
	for(i=0;i<=3;i++)
	printf(" %d",a[i]);
	getch();
}
void bubble_sort(int a[],int n)
{
	int round,i,t;
	for(round=1;round<=n-1;round++)
	for(i=0;i<=n-1-round;i++)
	if(a[i]>a[i+1])
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
}
