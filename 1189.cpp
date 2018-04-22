#include<iostream>
using namespace std;
int p[10000000];
int main()
{
	long i;int n,v;p[0]=1;p[1]=2;
	for(i=2;i<=1000000;i++)
	{
		p[i]=p[i-1]*2+p[i-2];
		p[i]%=32767;
	}
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>v;
		cout<<p[v-1]<<endl;
	}
	return 0;
}
