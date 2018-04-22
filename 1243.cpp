#include<bits/stdc++.h>
using namespace std;
int m,n,a[100001],l=-1,r=0;
int check(int g);
int main()
{
	cin>>n>>m;
	for (int i=1;i<=n;i++) 
	{
		cin>>a[i];
        r+=a[i];
		if (a[i]>l)l=a[i];
	}
	while (l+1<r)
	{
		int mid=(l+r)/2;
		if (check(mid)) l=mid;
		else r=mid;
	}
	if (!check(l)) cout<<l;
	else cout<<r;
	return 0;
}
int check(int g)
{
	int ggg=1,lj=0;
	for (int i=1;i<=n;i++)
	{
		if(a[i]+lj<=g)
		lj+=a[i];
		else
		{
			ggg++;
			lj=a[i];
		}
	}
	return ggg>m;
}
