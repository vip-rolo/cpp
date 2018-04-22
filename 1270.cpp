#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int n,m,w[1000],v[1000],f[7000],g[1000];
int main()
{
	cin>>n>>m;
	for (int i=1;i<=n;i++) 
	cin>>w[i]>>v[i]>>g[i];
	for (int i=1;i<=n;i++)
	{
		if(g[i]>1)
		{
			for (int j=m;j>=w[i];j--)
	        for (int k=0;k<=g[i];k++)
	        if (j-w[i]*k>=0&&f[j-w[i]*k]+v[i]*k>f[j]) f[j]=f[j-w[i]*k]+v[i]*k;
		}
		if(g[i]==1)
		{
			for(int j=m;j>=w[i];j--)
 		    if(f[j]<f[j-w[i]]+v[i])f[j]=f[j-w[i]]+v[i];
		}
		if(g[i]==0)
		{
			for (int j=w[i];j<=m;j++)
			if (f[j-w[i]]+v[i]>f[j]) f[j]=f[j-w[i]]+v[i];
		}
	}
	cout<<f[m];
	return 0;
}
