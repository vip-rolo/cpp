#include<iostream>
#include<iomanip>
using namespace std;
int a[50]={0},n,r;
bool f[50]={0};
void dfs(int t)
{
	if(t==r+1) {for(int i=1;i<=r;i++) cout<<setw(3)<<a[i];cout<<endl;}
	for(int i=a[t-1];i<=n;i++)
	{
		if(f[i]==0)
		{
			a[t]=i;
		    f[i]=1;
		    dfs(t+1);
		    f[i]=0;
		}
	}
}
int main()
{
	cin>>n>>r;
	a[0]=1;
	dfs(1);
	return 0;
}
