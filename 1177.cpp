#include<iostream>
#include <cstdio>
using namespace std;
int a[510];
int main()
{
    int n,i,j,b,k=0,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
        scanf("%d",&b);
        if(b%2==1)k++,a[k]=b;
    }
    for(i=1;i<=k;i++)
    for(j=i+1;j<=k;j++)
    if(a[i]>a[j])t=a[i],a[i]=a[j],a[j]=t;
    printf("%d",a[1]);
    for(i=2;i<=k;i++)
    printf(",%d",a[i]);
    return 0;
}
