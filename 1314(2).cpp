#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,x,y;
	long long q[21][21];
	cin>>m>>n>>x>>y;
	m++;n++;x++,y++;
	memset(q,0,sizeof(q));q[0][1]=1;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	{
		if(abs(i-y)+abs(j-x)==3||(i==y&&j==x));
		else q[i][j]=q[i-1][j]+q[i][j-1];
	}
	cout<<q[m][n];
	return 0;
}
