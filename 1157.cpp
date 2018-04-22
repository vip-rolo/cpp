#include<iostream>
using namespace std;
int ss(int c)
{
	bool b=true;
	if(c==2) return 1;
	else
	{
	    for(int x=2;x<=c;x++)
	    {
		    if(c%x==0) b=false; 
	    }		
	}
	if(b==true) return 1;
	else return 2;
} 
void fff(int i)
{
	cout<<i<<'=';
    for(int j=2;j<=i;j++)
	if(ss(j)==1) if(ss(i-j)==1) {cout<<j<<'+'<<i-j;break;}
}
int main()
{
	for(int i=6;i<=100;i+=2)
	{
        fff(i);
		cout<<endl;
	}
	return 0;
}
