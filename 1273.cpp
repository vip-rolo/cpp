#include<bits/stdc++.h>
using namespace std;
long long n,m,f[20000],a[20000];
int main()
{
	cin>>m>>n;
	f[0]=1;
	for (int i=1;i<=m;i++) cin>>a[i];
	for (int i=1;i<=m;i++)
		for (int j=a[i];j<=n;j++)	
			f[j]+=f[j-a[i]];
	cout<<f[n];
	return 0;
}
