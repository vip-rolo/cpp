#include <cstdio>
long long a[110];
int main()
{
    int n;
    int i;
    a[1]=1,a[2]=2,a[3]=4;
    for(i=4;i<=99;i++)
    a[i]=a[i-1]+a[i-2]+a[i-3];
    while(scanf("%d",&n)&&n)printf("%d\n",a[n]);
    return 0;
}
