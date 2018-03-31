#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int a[10000][10000],f[10000][10000];
int main()
{
	int i,j,k,n,r;
	long long s;
	cin>>n>>r>>s;
	for(i=n;i>=1;i--)
		a[i][i]=s%10,s/=10;
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			a[i][j]=a[i][j-1]*10+a[j][j];
	for(i=1;i<=n;i++)
		f[i][0]=a[1][i];
	for(k=1;k<=r;k++)
	{
		for(i=k+1;i<=n;i++)
		{
			for(j=k;j<i;j++)
			f[i][k]=max(f[i][k],f[j][k-1]*a[j+1][i]);
		}
	}
	cout<<f[n][r];
	return 0;
}
