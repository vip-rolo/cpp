#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int maxn,f[100][100],v[100][100];
int xxx(int i,int j)
{
    int k;
    if(i==0)return 0;
    for(k=0;k<=j;k++)
    if(maxn==f[i-1][k]+v[i][j-k])
    {
    	maxn=f[i-1][k];
    	xxx(i-1,k);
    	cout<<i<<' '<<j-k<<endl;
    	break;
    }
}
int main()
{
	int n,m,j,k,i;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	cin>>v[i][j];
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	{
		maxn=0;for(k=1;k<=j;k++)
		if(f[i-1][k]+v[i][j-k]>maxn)
		maxn=f[i-1][k]+v[i][j-k];
		f[i][j]=maxn;
	}
	cout<<maxn<<endl;
	xxx(n,m);
	return 0;
}
