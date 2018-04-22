#include<iostream>
using namespace std;
int fb[10000000];
int main()
{
	long i;int n,v;fb[0]=1;fb[1]=1;
	for(i=2;i<=1000000;i++)
	{
		fb[i]=fb[i-1]+fb[i-2];
		fb[i]%=1000;
	}
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>v;
		cout<<fb[v-1]<<endl;
	}
	return 0;
}
