#include<iostream>
#include<cstdio>
using namespace std;
void xx(int n,char a,char c,char b);
int main()
{
	int n;
	char a,b,c;
	cin>>n>>a>>c>>b;
	xx(n,a,c,b);
	return 0;	
} 
void xx(int n,char a,char c,char b)
{
	if (n==0) return;
	xx(n-1,a,b,c);
	printf("%c->%d->%c\n",a,n,c);
	xx(n-1,b,c,a);
}
