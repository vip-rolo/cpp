#include<bits/stdc++.h>
bool mg[100][100][100];
int dx[10]={0,-1,0,1,0,0,0},dy[10]={0,0,-1,0,1,0,0},dz[10]={0,0,0,0,0,1,-1};
long long dl[100000][5];
using namespace std;
int main()
{
	int x,y,z,x1,y1,z1;
	int a,b,c;
	cin>>c>>a>>b;
	while (a!=0&&b!=0&&c!=0)
	{
		bool bj=1;
		memset(mg,0,sizeof(mg));
		memset(dl,0,sizeof(dl));
		for (int iii=1;iii<=c;iii++)
			for (int ii=1;ii<=a;ii++)
				for (int i=1;i<=b;i++)
				{
					char g;
					cin>>g;
					if (g=='S') 			
					{
						x=ii;
						y=i;
						z=iii;
						mg[iii][ii][i]=0;
					}
					if (g=='E') 
					{
						x1=ii;
						y1=i;
						z1=iii;
						mg[iii][ii][i]=1;
					}
					if (g=='.') mg[iii][ii][i]=1;
					if (g=='#') mg[iii][ii][i]=0;
				}
		int h=0,t=1;
		dl[1][1]=z;
		dl[1][2]=x;
		dl[1][3]=y;
		dl[1][4]=0;
		while (h<t)
		{
			h++;
			for (int i=1;i<=6;i++)
			{
				int ddx=dl[h][2]+dx[i];
				int ddy=dl[h][3]+dy[i];
				int ddz=dl[h][1]+dz[i];
				if (ddx>=1&&ddx<=a&&ddy>=1&&ddy<=b&&ddz>=1&&ddz<=c&&mg[ddz][ddx][ddy])
				{
					t++;
					dl[t][1]=ddz;
					dl[t][2]=ddx;
					dl[t][3]=ddy;
					dl[t][4]=dl[h][4]+1;
					mg[ddz][ddx][ddy]=0;
					if (dl[t][1]==z1&&dl[t][2]==x1&&dl[t][3]==y1)
					{
						bj=0;
						printf("Escaped in %d minute(s).\n",dl[t][4]);
						break;
					}
				}	
			}
		}
		if (bj) printf("Trapped!\n");
		cin>>c>>a>>b;
	}
	return 0;	
}
