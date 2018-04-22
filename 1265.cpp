#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f[2000][2000];
string x,y;
int main()
{
	int i,j,xl,yl;
	cin>>x>>y;
	xl=x.size();yl=y.size();
	for(i=1;i<=xl;i++)
	for(j=1;j<=yl;j++)
	{
		f[i][j]=max(f[i-1][j],f[i][j-1]);
		if(x[i-1]==y[j-1])f[i][j]=max(f[i][j],f[i-1][j-1]+1);
	}
	cout<<f[xl][yl];
	return 0;
}
