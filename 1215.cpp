#include<iostream>
#include<cstdio>
using namespace std;
int a[1000][1000];
int n,m,x1,y1,x2,y2;
int dx[5]={0,1,-1,0,0},dy[5]={0,0,0,1,-1};
bool bfs(int x,int y)
{
	int b[1000][2],t=-1,w=1;bool bb=false;
	b[1][0]=x;b[1][1]=y;
	while(t<w)
	{
		t++;
		for(int i=1;i<=4;i++)
		{
			int ddx=x+dx[i],ddy=y+dy[i];
			if(ddx>=0&&ddy>=0&&ddx<=m&&ddy<=m&&a[ddx][ddy]==0)
			{
				b[w][0]=ddx;b[w][1]=ddy;a[ddx][ddy]=1;w++;
				if(ddx==x2&&ddy==y2) {bb=true;break;}
			}
			else{ddx=x-dx[i];ddy=y-dy[i];}
		}
	}
	return bb;
}
int main()
{
	int i,j;
	cin>>n;
	for(int i_=1;i_<=n;i_++)
	{
		char x;
		cin>>m;
		for(i=0;i<m;i++)
		for(j=0;j<m;j++)
		{
			cin>>x;
			if(x=='#')a[i][j]=1;
			else a[i][j]=0;
		}
		cin>>x1>>y1>>x2>>y2;
		if(bfs(x1,y1))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
