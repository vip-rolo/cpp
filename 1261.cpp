#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int F[100001],a[1001][1001],c[1001];
int main()
{
	int n;
	cin>>n;
	memset(F,0,sizeof(F));
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			cin>>a[i][j];
	for (int i=1;i<=n;i++) F[i]=2147283647;
	F[n]=0;
	for (int i=n-1;i>=1;i--)
		for (int j=i+1;j<=n;j++)
		{
			if ((F[j]!=2147283647)&&(a[i][j]>0)&&(F[i]>a[i][j]+F[j]))
			{
				F[i]=a[i][j]+F[j];
				c[i]=j;
			}
		}
	int k=1;
	cout<<"minlong="<<F[1]<<endl;
	while (k!=0)
	{
		cout<<k<<' ';
		k=c[k];
	}
	return 0;
}
