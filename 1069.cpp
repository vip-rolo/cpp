#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long a,m,n,i;
	a=1;
	cin>>m>>n;
	for( i=1;i<=n;i++)
	{
		a=a*m;
	}
	cout<<a<<endl;
}
