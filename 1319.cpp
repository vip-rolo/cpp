#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
struct water{int time,no;}a[20001];
int cmp(water a,water b){return a.time<b.time;}
int main()
{
	int i,n;double f=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i].time;
		a[i].no=i;
	}
	sort(a+1,a+n+1,cmp);
	for(i=1;i<=n;i++)
	{
		cout<<a[i].no<<' ';
		f+=(double)((n-i)*a[i].time);
	}
	cout<<endl;
	printf("%0.2f",f/n);
	return 0;
} 
