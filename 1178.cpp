#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
struct cjc{
	string name;
	double fff;
}a[101];
int main()
{
	int n,m,i,j;
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i].name>>a[i].fff;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++) 
	{
		if(a[i].fff>a[j].fff) swap(a[i],a[j]);
		if(a[i].fff==a[j].fff) 
		if(a[j].name>a[i].name) swap(a[i],a[j]);
	}
	for(m=1;m<=n;m++)
	{
		cout<<a[m].name; printf(" %g\n",a[m].fff);
	}
	return 0;
}
