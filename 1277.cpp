#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,f[100][100][100][100],a[100][100];
int main()
{
	int i,j,h,k,x=1,y=1,z=1;
	cin>>n;
	cin>>x>>y>>z;
	while(x!=0&&y!=0&&z!=0)
	{
		a[x][y]=z;
		cin>>x>>y>>z;
	}
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	for(h=1;h<=n;h++)
	for(k=1;k<=n;k++)
	{
		f[i][j][h][k]=max(max(f[i-1][j][h-1][k],f[i][j-1][h-1][k]),max(f[i-1][j][h][k-1],f[i][j-1][h][k-1]))+a[i][j];
		if(i!=h&&j!=k)f[i][j][h][k]+=a[h][k];
	}
	cout<<f[n][n][n][n];
	return 0;
}
