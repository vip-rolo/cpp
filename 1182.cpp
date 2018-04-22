#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
float m[40],w[40];
int main()
{
	int i,f1=1,f2=1,j,y;float n;
	char x[7];
	cin>>y;
	for(i=1;i<=y;i++)
	{
		scanf("%s%f",x,&n);
		if(x[0]=='f'){w[f2]=n;f2++;}
		else{m[f1]=n;f1++;}
	}
	for(i=1;i<f1;i++)for(j=1;j<f1;j++)if(m[i]<m[j])swap(m[i],m[j]);
	for(i=1;i<f2;i++)for(j=1;j<f2;j++)if(w[i]>w[j])swap(w[i],w[j]);
	for(i=1;i<f1;i++) printf("%3.2f ",m[i]);
	for(i=1;i<f2;i++) printf("%3.2f ",w[i]);
	return 0;
}
