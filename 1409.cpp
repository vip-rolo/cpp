#include<iostream>
using namespace std;
void ss(int x,int y)
{
	bool b;
	int a=0;
	for(int i=x;i<=y;i++)
	{
	    if(i==2||i==3) a++;
	    else
	    {
		for(int j=2;j*j<=i;j++)
		{
		    if(i%j==0) b=false; 
		}
		if(b==true) a++;
		b=true;	    		
	    }
	}
	cout<<a;
}
int main()
{
	long n,m;
	cin>>n>>m;
	ss(n,m);
	return 0;
}
