#include<bits/stdc++.h>
using namespace std;
int n,m,b[10000][10000],num=0;
int dx[5]={0,-1,0,1,0},dy[5]={0,0,1,0,-1};
void bfs(int x,int y)
{
	int a[10000][3];
	int h=0,t=1,ddx,ddy;
	num++;
	a[1][1]=x;
	a[1][2]=y;
	b[x][y]=0;
	do
	{
	    h++;
		for(int i=0;i<=4;i++)
		{
			ddx=dx[i]+a[h][1];ddy=dy[i]+a[h][2];
			if((ddx>=1)&&(ddx<=n)&&(ddy>=1)&&(ddy<=m)&&(b[ddx][ddy]==1))
			{
				a[t][1]=ddx;
				a[t][2]=ddy;
				b[ddx][ddy]=0;
				t++;
			}
		}
	}while(h<t);
}
int main()
{
	cin>>n>>m;
	char llll;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
	    cin>>llll;
		if(llll=='0')b[i][j]=0;
		else b[i][j]=1;
	}
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		if(b[i][j]==1){bfs(i,j);}
	}
	cout<<num;
	return 0;
}
