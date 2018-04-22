#include<iostream>
#include<cstdio>
using namespace std;
struct cjc{
	int name,Chinese,Math,English,fff;
}a[300];
int main()
{
	int n,m,i,j;
	cin>>n;
	for(i=1;i<=n;i++) 
	{
		cin>>a[i].Chinese>>a[i].Math>>a[i].English;
		a[i].name=i;
		a[i].fff=a[i].Chinese+a[i].Math+a[i].English;
	}
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++) 
	{
		if(a[i].fff>a[j].fff) swap(a[i],a[j]);
		if(a[i].fff==a[j].fff) 
		{
			if(a[j].Chinese<a[i].Chinese) swap(a[i],a[j]);
		    if(a[j].Chinese==a[i].Chinese)
		    if(a[i].name<a[j].name) swap(a[i],a[j]);
		}
	}
	for(m=1;m<=5;m++)
	{
		cout<<a[m].name; printf(" %d\n",a[m].fff);
	}
	return 0;
}
