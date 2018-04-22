#include<iostream>
using namespace std;
long long g[500];
int main()
{
    int i,j;
    g[1]=3;g[2]=7;
    for(i=3;i<=500;i++)g[i]=g[i-1]*2+g[i-2];
    cin>>j;
    cout<<g[j];
    return 0;
}
