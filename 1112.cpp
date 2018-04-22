#include<iostream>
using namespace std;
int a[10000];
void fff(int a[],int b)
{
	int i,maxn=-10000,minn=10001;
	for(i=1;i<=b;i++)
	{
		if(a[i]>maxn) maxn=a[i];
		if(a[i]<minn) minn=a[i];
	}
	cout<<maxn-minn;
}
int main()
{
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	fff(a,n);
	return 0;
}
