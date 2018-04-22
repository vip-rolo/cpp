#include<iostream>
#include<iomanip>
using namespace std;
int a[22]={0};bool b[22]={0};int n,r;
void zh(int k)
{
	int i;
    for(i=1;i<=r;i++)
	{
        if(!b[i])
        {
        	a[k]=i;
        	b[i]=1;
        	if(k==r){for(int j=1;j<=r;j++)cout<<setw(3)<<a[j];cout<<endl;}
			else zh(k+1);
			b[i]=0;		
		}
	}
}
int main()
{
	cin>>n>>r;
	zh(1);
	return 0;
}
