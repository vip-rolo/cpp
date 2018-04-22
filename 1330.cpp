#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int d[10000][4],h,t,s[101][101];
int dx[13]={0,-2,-2,-1,1,2,2,2,2,1,-1,-2,-2};
int dy[13]={0,-1,-2,-2,-2,-2,-1,1,2,2,2,2,1};
int main()
{
	int x1,x2,y1,y2;
	memset(s,0xff,sizeof(s));
	h=0;t=1;
	d[1][1]=1;d[1][2]=1;d[1][3]=0;
	cin>>x1>>y1>>x2>>y2;
	while(h<=t)
	{
	    h++;
		for (int i=1;i<=12;i++)
		{
			int x=d[h][1]+dx[i];
			int y=d[h][2]+dy[i];
			if (x>1&&y>1)
			if(s[x][y]==-1)
			{
				s[x][y]=d[h][3]+1;
				t++;
				d[t][1]=x;
				d[t][2]=y;
				d[t][3]=s[x][y];
				if(s[x1][y1]>0&&s[x2][y2]>0)
				{
				    cout<<s[x1][y2]<<endl<<s[x2][y2];
				    return 0;
				}
			}
		}
	}
}
