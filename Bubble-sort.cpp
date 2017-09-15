#include<iostream>
using namespace std;
int main()
{
 int i,j,n,t;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
   t=a[i];
   a[i]=a[j];
   a[j]=t;
   }
  }
 }
 cout<<"---SORTED ARRAY---";
 for(i=0;i<n;i++)
 cout<<"\n"<<a[i];
 cout<<"\n";
 return 0;
}
