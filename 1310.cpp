#include<iostream>
using namespace std;
int a[10001];
int main()
{
	int n,i,j,fff=0,k;
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[j]>a[j+1]) {k=a[j];a[j]=a[j+1];a[j+1]=k;fff++;}
		}
	}
	cout<<fff;
	return 0;
}
