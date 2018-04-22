#include<iostream>
using namespace std;
char a[101][101],b[101][101];
int main()
{
	int n,m,i,j,k;long long v=0;
	cin>>n;
	for(i=1;i<=n;i++)for(j=1;j<=n;j++) cin>>a[i][j];
	cin>>m;
	for(i=2;i<=m;i++)
	{
	    for(int ii=1;ii<=n;ii++)for(int jj=1;jj<=n;jj++)b[ii][jj]=a[ii][jj];
		for(j=1;j<=n;j++)
		for(k=1;k<=n;k++)
		{
			if(a[j][k]=='@')
			{
			    if(a[j-1][k]=='.')b[j-1][k]='@';
			    if(a[j+1][k]=='.')b[j+1][k]='@';
			    if(a[j][k-1]=='.')b[j][k-1]='@';
			    if(a[j][k+1]=='.')b[j][k+1]='@';
			}
		}
		for(int ii=1;ii<=n;ii++)
		for(int jj=1;jj<=n;jj++)a[ii][jj]=b[ii][jj];
	}
	for(i=1;i<=n;i++)for(j=1;j<=n;j++) if(a[i][j]=='@')v++;
	cout<<v;
	return 0;
}
