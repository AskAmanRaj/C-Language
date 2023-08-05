main()
{
int a[3][3],i,b[3][3],j,c[3][3];
printf("enter nine numbers\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
if(j==3-1)
{
	printf("\n\n");
}
}
}
printf("enter nine numbers\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&b[i][j]);
if(j==3-1)
{printf("\n\n");
}
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{

c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
if(j==3-1)
{printf("\n\n");
}
}
}
getch();
}
