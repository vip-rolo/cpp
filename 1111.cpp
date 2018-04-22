#include<iostream>
using namespace std;
int a[8];int b[8];
bool bj(int a,int b,int c)
{
	if(a+b>c) return true;
	else return false;
}
int main()
{
	int i,maxn=0,day;
	for(i=1;i<=7;i++)
	{
		cin>>a[i]>>b[i];
		if(bj(a[i],b[i],maxn)) 
		{
			maxn=a[i]+b[i];
			day=i;
		}
	}
	cout<<day;
	return 0;
}
