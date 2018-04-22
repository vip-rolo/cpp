#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
	long i,l,r,mid,n,m;
	cin>>n;
	for(i=1;i<=n;i++)scanf("%d",&a[i]);
	cin>>m;
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++)
	{
	    l=i+1;r=n;
		while(l+1<r)
		{
		    mid=(l+r)/2;
			if(m==a[mid]+a[i]){cout<<a[i]<<' '<<mid;return 0;}
			if(m>a[mid]+a[i])l=mid;
			if(m<a[mid]+a[i])r=mid;
		}	
	}
	cout<<"No";
	return 0;
}
