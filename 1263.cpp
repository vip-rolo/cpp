#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct city 
{
	int b,e,g;
}c[100000];
bool cmp(city x,city y)
{
	return x.b<y.b;
}
int main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++) 
	{
		cin>>c[i].b>>c[i].e;
		c[i].g=1;
	}
	sort(c+1,c+n+1,cmp);
	for (int i=n-1;i>=1;i--)
	{
		int l=0,k=0;
		for (int j=i+1;j<=n;j++)
		{
			if (c[i].b<c[j].b&&c[i].e<c[j].e&&c[j].g>l)
			{
				l=c[j].g;
			}
			if (l!=0) c[i].g=l+1;
		}
	}
	int k=1;
	for (int i=1;i<=n;i++) if (c[i].g>c[k].g) k=i;
	cout<<c[k].g;
	return 0;
}
