#include<iostream>
using namespace std;
int a[100001],b[100001];
long long ans=0;
void px(int x,int y)
{
	if(x==y) return;
	int mid=(x+y)/2;
	px(x,mid);px(mid+1,y);
	int i=x,j=mid+1,k=x;
	while(i<=mid&&j<=y)
	{
		if(a[i]<=a[j]){b[k]=a[i];k++;i++;}
		else {b[k]=a[j];k++;j++;ans+=mid-i+1;}
	}
	while(i<=mid){b[k]=a[i];k++;i++;}
	while(j<=y){b[k]=a[j];k++;j++;}
	for(int i=x;i<=y;i++) a[i]=b[i];
}
int main()
{
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	px(1,n);
	cout<<ans;
	return 0;
}
