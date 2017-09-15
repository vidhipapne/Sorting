#include<iostream>
using namespace std;
int main()
{
 int a[20],n,temp,j;
  cout<<"range";
  cin>>n;
  cout<<"elements";
  for(int i=0;i<n;i++)
  { 
   cin>>a[i];
   }
  for(int i=1;i<n;i++)
    {
       temp=a[i];
        j=i-1;
      while(j>=0 && temp<a[j])
      {
        a[j+1]=a[j];
        j--;
      }
     a[j+1]=temp;
    }
cout<<"---SORTED ARRAY---";    
for(int i=0;i<n;i++)
{
 cout<<a[i];
}
return 0;
}
