#include<iostream>
#include<cstdio>
using namespace std;
long long a[21][21],g[21][21];
int dx[10]={-2,-1,+1,+2,+1,+2,-1,-2},dy[10]={-1,-2,+2,+1,-2,-1,+2,+1};
int main()
{
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	for(int i=0;i<=m;i++)
	a[0][i]=1;
	for(int i=0;i<=n;i++)
	a[i][0]=1;g[x][y]=1;
	for(int i=0;i<8;i++)
	if(x+dx[i]>=0&&x+dx[i]<=n&&y+dy[i]>=0&&y+dy[i]<=m)g[x+dx[i]][y+dy[i]]=1;
	for(int i=0;i<=n;i++)
	for(int j=0;j<=m;j++)
	{
		if(g[i][j]==0)
		{
			if(i==0&&j==0) continue;
			else if(i==0) a[i][j]=a[i][j-1];
			else if(j==0) a[i][j]=a[i-1][j];
			else a[i][j]=a[i-1][j]+a[i][j-1];
		}
		else a[i][j]=0;
	}
	cout<<a[n][m];
	return 0;
}
