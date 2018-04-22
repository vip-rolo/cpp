#include<iostream>
#include<cstdio>
using namespace std;
int f[2000],v[2000],w[2000];
int main()
{
	int i,j,n,m;
	cin>>m>>n;
	for(i=1;i<=m;i++)cin>>w[i]>>v[i];
	for(i=1;i<=n;i++)
	for(j=m;j>=w[i];j--)
	{
 		if(f[j]<f[j-w[i]]+v[i])f[j]=f[j-w[i]]+v[i];
	}
	cout<<f[m];
	return 0;
}
