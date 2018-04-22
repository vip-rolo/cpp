#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,m,n,i,a1,b1,c1;
	a1=0;
	b1=0;
	c1=0;
	cin>>m;
	for( i=1;i<=m;i++)
	{
		cin>>a>>b>>c;
		a1=a1+a;
		b1=b1+b;
		c1=c1+c;
	}
	cout<<a1<<' '<<b1<<' '<<c1<<' '<<a1+b1+c1;
}
