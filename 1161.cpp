#include <stdio.h>
int x,m;
void print(int a)
{
    if(a>=10)printf("%c",'A'+a-10);
    else printf("%d",a);
}
void f(int a)
{
    if(a==0)return;
    f(a/m);
    print(a%m);
}
int main()
{
    scanf("%d%d",&x,&m);
    f(x);
}
