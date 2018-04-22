#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
bool mg[100][100];
int dx[5]={0,-1,0,1,0};
int dy[5]={0,0,-1,0,1};
long long dl[100000][5];
using namespace std;
int main()
{
	int x,y,x1,y1;
	int a,b;
	cin>>a>>b;
	while (a!=0&&b!=0)
	{
		bool bj=1;
		memset(mg,0,sizeof(mg));
		memset(dl,0,sizeof(dl));
		for (int ii=1;ii<=a;ii++)
			for (int i=1;i<=b;i++)
			{
				char g;
				cin>>g;
				if (g=='@') 			
				{
					x=ii;
					y=i;
					mg[ii][i]=0;
				}
				if (g=='*') 
				{
					x1=ii;
					y1=i;
					mg[ii][i]=1;
				}
				if (g=='.') mg[ii][i]=1;
				if (g=='#') mg[ii][i]=0;
				}
		int h=0,t=1;
		dl[1][2]=x;
		dl[1][3]=y;
		dl[1][4]=0;
		while (h<t)
		{
			h++;
			for (int i=1;i<=4;i++)
			{
				int ddx=dl[h][2]+dx[i];
				int ddy=dl[h][3]+dy[i];
				if (ddx>=1&&ddx<=a&&ddy>=1&&ddy<=b&&mg[ddx][ddy])
				{
					t++;
					dl[t][2]=ddx;
					dl[t][3]=ddy;
					dl[t][4]=dl[h][4]+1;
					mg[ddx][ddy]=0;
					if (dl[t][2]==x1&&dl[t][3]==y1)
					{
						bj=0;
						printf("%d\n",dl[t][4]);
						break;
					}
				}	
			}
		}
		if (bj) printf("-1\n");
		cin>>a>>b;
	}
	return 0;	
}
