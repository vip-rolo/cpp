#include<bits/stdc++.h>
using namespace std;
int n,a[10000],f[10000],b[1000][2],c[1000],maxn;
bool tl[1000][1000]={0};
int main()
{
	cin>>n;
	for (int i=1;i<=n;i++) cin>>a[i];
	int aa,bb;
	cin>>aa>>bb;
	while (aa!=0&&bb!=0)
	{
		tl[aa][bb]=1;
		cin>>aa>>bb;
	}
	f[n]=a[n];
	for (int i=n-1;i>=1;i--)
	{
		int l=0,k=0;
		for (int j=i+1;j<=n;j++)
		{
			if (tl[i][j]&&f[j]>l)
			{
				l=f[j];
				k=j;
			}
		}
		f[i]=l+a[i];
		c[i]=k;
	}
	int k=1;
	for (int i=1;i<=n;i++) 
	{
		if (f[i]>f[k]) k=i;
	}
	maxn=f[k];
	cout<<k;
	k=c[k];
	while (k!=0)
	{
		cout<<'-'<<k;
		k=c[k];
	}
	cout<<endl;
	cout<<maxn;
	return 0;
}
