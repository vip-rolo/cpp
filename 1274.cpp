#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int s[101],a[101],f[101][101];
int minn(int a,int b)
{
	return a>b?b:a;
}
int main()
{
	int i,k,l,r,n;
	memset(f,127/3,sizeof(f));
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		s[i]=s[i-1]+a[i];
		f[i][i]=0;
	}
	for(i=2;i<=n;i++)
	{
		for(l=1;l<=n-i+1;l++)
		{
			r=i+l-1;
			for(k=l;k<=r-1;k++)
			{
				f[l][r]=minn(f[l][r],f[l][k]+f[k+1][r]+s[r]-s[l-1]);
			}
		}
	}
	cout<<f[1][n];
	return 0;
}
