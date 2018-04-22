#include<bits/stdc++.h>
using namespace std;
int a[100001];
int cmp(int a,int b){return a>b;}
int main()
{
	int i,n,m,x,mid,l,r;
	cin>>n;
	for(i=1;i<=n;i++)scanf("\n%d",&a[i]);
	cin>>m;
	sort(a+1,a+n+1,cmp);
	for(int j=1;j<=m;j++)
	{
		cin>>x;l=1;r=n;
		while(l<r-1)
		{
			mid=(l+r)/2; 
	        if(x<mid)r=mid;
	        if(x>mid)l=mid;
			if(abs(x-a[l])>abs(x-a[r]))	{cout<<a[r]<<endl;break;}
			if(abs(x-a[l])<abs(x-a[r])) {cout<<a[l]<<endl;break;}
			if(mid==x) {cout<<mid;break;}
		}
	}
	return 0;
}
