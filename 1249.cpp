#include<bits/stdc++.h>
using namespace std;
int n,m,k=0;
int dx[9]={0,-1,-1,0,1,1,1,0,-1};
int dy[9]={0,0,-1,-1,-1,0,1,1,1};
bool xb[10000][10000];
void water(int x,int y)
{
	k++;
	int h=-1,t=1;
	int dl[10000][3];
	dl[0][1]=x;
	dl[0][2]=y;
	while (h<t)
	{	
		h++;
		for (int i=1;i<=8;i++)
		{
			int ddx=dl[h][1]+dx[i];
			int ddy=dl[h][2]+dy[i];
			if (ddx>=1&&ddx<=n&&ddy>=1&&ddy<=m&&xb[ddx][ddy]==1)
			{
				dl[t][1]=ddx;
				dl[t][2]=ddy;
				xb[ddx][ddy]=0;
				t++;
			}
		}
	}
	
}
int main()
{
	cin>>n>>m;
	char g;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++)
		{
			cin>>g;
			if (g=='.') xb[i][j]=0;
			else xb[i][j]=1;
		}
	for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++)
		{
			if (xb[i][j]==1)
			{
				water(i,j);
			}
		}
	cout<<k;
	return 0;
}
