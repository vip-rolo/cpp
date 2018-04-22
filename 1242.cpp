#include<bits/stdc++.h>
using namespace std;
int a[10100],n,k,l,r,mid;
double s;
bool check(int x)
{
	int ans=0;
	for(int i=1;i<=n;i++)
		ans+=a[i]/x;
	return ans>=k;
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		a[i]=(int)(s*100+0.5);
		if(r<a[i]) r=a[i];
	}
	r++;
	while(l+1<r)
	{
		mid=(l+r)/2;
		if(check(mid)) l=mid;
		else r=mid;
	}
	printf("%.2lf",l/100.0);
	return 0;
}
