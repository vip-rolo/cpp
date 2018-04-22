#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int dmin=99999,a[100000],b[100000],n=1,k=0,z=0;
int main()
{
	memset(b,0,sizeof(b));
	while(cin>>a[n]) n++;
	n--;
	for(int i=1;i<=n;i++)
	{
		k=0;
		dmin=999999;
		for(int j=1;j<=z;j++) if(b[j]>=a[i]) if(b[j]<dmin) {dmin=b[j];k=j;}
		if(k!=0) b[k]=a[i];
		else {z++;b[z]=a[i];}
			
	}
	cout<<z;
	return 0;
}
