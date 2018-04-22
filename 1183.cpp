#include<iostream>
#include<string>
using namespace std;
struct x
{
	string age;
	string num;
}x[101];
string y[101];
int main()
{
	int i,j,m,r=1,t=1;string a,b;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>a>>b;
		if(b>="60"){x[r].num=a;x[r].age=b;r++;}
		else{y[t]=a;t++;}
	}
	t--;r--;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		if(x[j+1].age>x[j].age)swap(x[j+1],x[j]);
    }
	for(i=1;i<=r;i++)cout<<x[i].num<<endl;
	for(i=1;i<=t;i++)cout<<y[i]<<endl;
	return 0;
}
