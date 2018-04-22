#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
struct cjc{
	long name;
	double fff;
}a[101];
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++) cin>>a[i].name>>a[i].fff;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++) if(a[i].fff>a[j].fff) swap(a[i],a[j]);
	printf("%ld %g",a[m].name,a[m].fff);
	return 0;
}
