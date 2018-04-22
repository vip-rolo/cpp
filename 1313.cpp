#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main()
{
	long long a[1000],b[1000],n;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	a[1]=9;
	b[1]=1;
	cin>>n;
	for (int i=2;i<=n;i++)
	{
		if (i==n)
		{
			a[i]=(a[i-1]*8+b[i-1])%12345;
			b[i]=(a[i-1]+b[i-1]*8)%12345;
		} 
		else
		a[i]=(a[i-1]*9+b[i-1])%12345;
		b[i]=(a[i-1]+b[i-1]*9)%12345;
	}
	cout<<a[n];
	return 0;
}
