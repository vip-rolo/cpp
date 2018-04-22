#include<iostream>
#include<cstring>
using namespace std;
char a[1000],b[1000];bool f[1000]={0};int n;
void dfs(int t)
{
	if(t-1==n){for(int i=1;i<=n;i++)cout<<b[i];cout<<endl;}
	for(int i=1;i<=n;i++)
	{
		if(f[i]==0)
		{
			b[t]=(char)(a[i]);
			f[i]=1;
			dfs(t+1);
			f[i]=0;
		}
	}
}
int main()
{
	cin>>a+1;
	n=strlen(a+1);
	dfs(1);
	return 0;
}
