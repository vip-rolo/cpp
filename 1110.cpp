#include<iostream>
using namespace std;
int a[10001];
int main()
{
	int n,i,j,fff,b=0;
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];
	cin>>j;
	for(fff=1;fff<=n;fff++) if(j==a[fff]) {b=1;break;}
	if(b==1)cout<<fff;else cout<<"-1";
	return 0; 
}
