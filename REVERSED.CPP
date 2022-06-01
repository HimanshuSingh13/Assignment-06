#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int *arr,*arr1,i,j,x,n,y,count,sum;
cout<<"Enter the size of array";
cin>>n;
arr= new int[n];
arr1= new int[n];
for(i=0;i<n;i++)
{
cout<<endl<<"Enter the value of array";
cin>>arr[i];
}
for(i=0;i<n;i++)
{
x=arr[i];
count=0;
sum=0;
while(x>0)
{
count++;
x/=10;
}
x=arr[i];
for(j=count-1;j>=0;j--)
{
y=x%10;
x/=10;
if(count==0)
{
sum=sum+y;
}
else
{
sum=sum+(y*pow(10,count-1));
}
count=count-1;
}
arr1[i]=sum;
}
for(i=0;i<n;i++)
{
cout<<arr[i]<<"   "<<arr1[i];
cout<<endl;
}
getch();
}


