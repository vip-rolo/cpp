#include <stdio.h>
void digit(int n,int k)
{
    if(k==1)
	{
        printf("%d",n%10);
        return; 
    } 
    digit(n/10,--k);
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    digit(n,k);
    return 0;
}
