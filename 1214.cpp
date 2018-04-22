#include<cstdio>
#include<iostream>
using namespace std;
bool c[100]={0},d[100]={0},b[100]={0};
int tt=0,a[100],x[92][100];
void dfs(int i)
{
	int j;
	for(j=1;j<=8;j++)
	{
		if((!b[j])&&(!c[i+j])&&(!d[i-j+7]))
		{
			a[i]=j;
			b[j]=1;
			c[i+j]=1;
			d[i-j+7]=1;
			if(i==8)
			{
				tt++;
				for(int k=1;k<=8;k++)
				x[tt][k]=a[k];
			}
			else dfs(i+1);
			b[j]=0;
			c[i+j]=0;
			d[i-j+7]=0;
		}
	}
}
int main()
{
	int n,v;
	dfs(1);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v;
		for(int j=1;j<=8;j++)
		cout<<x[v][j];
		cout<<endl;
	}
	return 0;
}
