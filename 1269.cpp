#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int n,m,w[1000],c[1000],f[7000],g[1000];
int main()
{
	cin>>n>>m;
	for (int i=1;i<=n;i++) 
	cin>>w[i]>>c[i]>>g[i];
	for (int i=1;i<=n;i++)
	for (int j=m;j>=w[i];j--)
	for (int k=0;k<=g[i];k++)
	if (j-w[i]*k>=0&&f[j-w[i]*k]+c[i]*k>f[j]) f[j]=f[j-w[i]*k]+c[i]*k;
	cout<<f[m];
	return 0;
}
