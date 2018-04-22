#include<iostream>
using namespace std;
int main()
{
	int k,i,a,b,c;
	a=1;b=0;c=0;
	cin>>k;
	if(i==1) a=1;
	else
	{
		for(i=2;i<=k;i++)
	{
		c=a;
		a=a+b;
        b=c;
	}
	}
	
	cout<<a<<endl;
}
