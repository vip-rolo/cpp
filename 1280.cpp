#include<iostream>
#include<cstdio>
using namespace std;
int dx[5]={0,-1,0,1,0},dy[5]={0,0,-1,0,1},f[1000][1000],a[1000][1000],n,m;
int dfs(int x,int y)
{
	int i,j,t=1,ddx,ddy;
	if(f[x][y]>0)return f[x][y];
	for(i=1;i<=4;i++)
	{
		ddx=x+dx[i];ddy=y+dy[i];
		if(ddx>0&&ddy>0&&ddx<=n&&ddy<=m&&a[ddx][ddy]>a[x][y])
		{
			t=max(dfs(ddx,ddy)+1,t);
			
		}
		ddx-=dx[i];ddy-=dy[i];
	}
	f[x][y]=t;
	return t;
}
int main()
{
	int i,j,k,ans=-1;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	cin>>a[i][j];
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	{
		ans=max(ans,dfs(i,j));
	}
	cout<<ans;
	return 0;
}
