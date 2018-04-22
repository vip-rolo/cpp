#include<iostream>
using namespace std;
long a[100001];
int main()
{
	long n,m,i,x=0;
	cin>>n;
	for(i=1;i<=1001;i++) a[i]=0;
	for(i=1;i<=n;i++){cin>>m;a[m]++;}
	for(i=1;i<=n;i++)if(a[i]>0)x++;
	cout<<x<<endl;
	for(i=1;i<=n;i++)if(a[i]>0)cout<<i<<' ';
	return 0;
}
