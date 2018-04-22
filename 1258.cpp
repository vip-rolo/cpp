#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[1001][1001][3];
int main()
{
	int i,j,n,x=-283647;
	cin>>n;
	for(i=1;i<=n;i++)for(j=1;j<=i;j++)cin>>a[i][j][1];
	a[1][1][2]=a[1][1][1];
	for(i=2;i<=n;i++)for(j=1;j<=i;j++)
	a[i][j][2]=a[i][j][1]+max(a[i-1][j][2],a[i-1][j-1][2]);	
	for(i=1;i<=n;i++)
	x=max(a[n][i][2],x);
	cout<<x;
	return 0;
}
