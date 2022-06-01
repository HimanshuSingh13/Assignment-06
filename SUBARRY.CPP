#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int i,j,a[3][3],b[3][3],sum[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<endl<<"Enter the value of the array:";
cin>>a[i][j]>>b[i][j];
sum[i][j]=a[i][j]-b[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<setw(4)<<sum[i][j];
}
cout<<endl;
}
getch();
}
