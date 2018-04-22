#include<iostream>
using namespace std;
bool hh(int x)
{
	bool b=true;
	if((x/100==x%10)||(x/10==x%10)||(x/1000==x%10)) b=true;
	else b=false;
	if(b==true) return true;
	else return false; 
}
bool ss(int c)
{
	bool b=true;
	for(int j=2;j*j<=c;j++)
	{
		if(c%j==0) b=false; 
	}
	if(b==true) return true;
	else return false;
}
int main()
{
	int n,i,fff=1;
	cin>>n;
	for(i=12;i<=n;i++)if(hh(i)==true&&ss(i)==true) fff++;
	cout<<fff;
	return 0;
}
