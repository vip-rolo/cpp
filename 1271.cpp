#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n,m,f[1001][1001],c[1001],w[1001],g[1001],k;
int main()
{
	cin>>m>>n>>k;
	memset(f,127,sizeof(f));
	f[0][0]=0;
	for (int i=1;i<=k;i++) 
	{
		cin>>w[i]>>c[i]>>g[i];
	}
	for (int i=1;i<=k;i++)
		for (int j=m;j>=0;j--)
			for (int l=n;l>=0;l--)
			{
				int t1=j+w[i],t2=l+c[i];
				if (t1>m) t1=m;
				if (t2>n) t2=n;
				if (f[t1][t2]>f[j][l]+g[i]) f[t1][t2]=f[j][l]+g[i];
			}
				
	cout<<f[m][n];
	return 0;
}
