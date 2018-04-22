#include<iostream>
using namespace std;
void px(int n);
struct x
{
	int h,f;
}p[10000];
int main()
{
	int n,m,g;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{	
		cin>>p[i].h>>p[i].f;
	}
	px(n);
	int x=p[(m*15/10)].f;
	int z=0;
	for (int i=1;i<=n;i++)
	{
		if (p[i].f>=x) z++;
	}
	cout<<x<<' '<<z<<endl;
	for (int i=1;i<=n;i++)
	{
		if (p[i].f>=x) cout<<p[i].h<<' '<<p[i].f<<endl;
	}
	return 0;
}
void px(int n)
{
	for (int i=1;i<=n-1;i++)
	{
		for (int j=1;j<=n-1;j++)
		{
			if (p[j].f<p[j+1].f)
				swap(p[j],p[j+1]);
			else if (p[j].h>p[j+1].h&&p[j].f==p[j+1].f)
				swap(p[j],p[j+1]);
		}
	}
}
