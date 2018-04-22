#include<cstdio>
#include<iostream>
using namespace std;
int ji[11],ou[11];
int main()
{
	int i,f1=1,f2=1,j,n;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		if(n%2==0){ou[f2]=n;f2++;}
		else{ji[f1]=n;f1++;}
	}
	for(i=1;i<f1;i++)for(j=1;j<f1;j++)if(ji[i]>ji[j])swap(ji[i],ji[j]);
	for(i=1;i<f2;i++)for(j=1;j<f2;j++)if(ou[i]<ou[j])swap(ou[i],ou[j]);
	for(i=1;i<f1;i++) printf("%d ",ji[i]);
	for(i=1;i<f2;i++) printf("%d ",ou[i]);
	return 0;
}
