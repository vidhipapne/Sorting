#include<iostream>
using namespace std;
void adjust(int a[] ,int i,int n)
{
	int j,item ;
	j=2*i;item=a[i];
	while(j<=n)
	{
		if(j<n&& a[j]<a[j+1])
		j=j+1;
		if(item>a[j])
		break;
		a[j/2]=a[j];
		j=j*2;
	}
	a[j/2]=item;
}
void heapify(int a[],int n)
{
	for(int i=n/2;i>=1;i--)
	{
		adjust(a,i,n);
	}
}
	void heapsort(int a[],int n)
	{
		heapify(a,n);
		for(int i=n;i>=2;i--)
		{
		int temp;
			temp=a[1];
			a[1]=a[i];
			a[i]=temp;
			adjust( a,1,i-1);
			}
			cout<<"after heap sort\n";
			for(int i=1;i<=n;i++)
			{
			cout<<a[i]<<" ";
		}
}

int main()
{
	int a[10],i,n;
	cout<<"enter size\n";
	cin>>n;
	cout<<"enter "<<n<<"elements";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
}
heapsort(a,n);int s;cin>>s;
return 0;
}
