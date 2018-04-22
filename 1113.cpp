#include<iostream>
using namespace std;
long a[101];
int main()
{
	long i,n,maxn=-1000001,h=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>maxn) maxn=a[i];
	}
	for(i=1;i<=n;i++) if(a[i]!=maxn) h+=a[i];
	cout<<h;
	return 0;
}
