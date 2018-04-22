#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
char a[501],b;
int dmax,dst,ded,t;
int main()
{
	gets(a);
	int len=strlen(a);
	a[len]=' ';
	for(int i=0;i<=len;i++)
	{
		if(a[i]!=' ') dmax++;
		else if(dmax>0)
		{
			dst=i-dmax;
			ded=i-1;
			while(dst<ded)
			{
				b=a[dst];
				a[dst]=a[ded];
				a[ded]=b;
				ded--;dst++;
			}
			dmax=0;
		}
	}
	for(int i=0;i<=len;i++)
	cout<<a[i];
	return 0;
}
