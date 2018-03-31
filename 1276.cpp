#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,m,i,j,f[10000][10000];char a[10000],b[10000];
int main()
{
	cin>>a>>b;
	n=strlen(a);
	m=strlen(b);
	for(i=1;i<=n;i++)f[i][0]=i;
	for(i=1;i<=m;i++)f[0][i]=i;
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	{
		if(a[i-1]==b[j-1])f[i][j]=f[i-1][j-1];
		else f[i][j]=min(min(f[i-1][j]+1,f[i][j-1]+1),f[i-1][j-1]+1);
	}
	cout<<f[n][m];
	return 0;
}
