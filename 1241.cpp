#include<iostream>
#include<cstdio>
using namespace std;
double f(double x){return (x*x*x*x*x-15*x*x*x*x+85*x*x*x-225*x*x+274*x-121);}
int main()
{
	double x,x1=1.5,x2=2.4,xx;
	while(x1+0.000001<x2)
	{
		xx=(x1+x2)/2.0;
		x=f(xx);
		if(x<0)x2=xx;
		else x1=xx;
	}
	if(f(x1)==0)printf("%.6lf",x1);
	else printf("%.6lf",x2);
	return 0;
}
