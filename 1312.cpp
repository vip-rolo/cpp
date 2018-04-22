#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,y,z,r[1000],r1[1000];
	memset(r,0,sizeof(r));
	memset(r1,0,sizeof(r1));
	cin>>x>>y>>z;
	for (int i=1;i<=x;i++) r[i]=1;
	for (int i=x+1;i<=z+1;i++)
	{
		r1[i]=r[i-x]*y;
		r[i]=r[i-1]+r1[i-2];
	}
	cout<<r[z+1];
	return 0;
}
