#include <stdio.h>
#include <math.h>
int isPrime(int a)
{
    int i;
    if(a<2)return 0;
    if(a==2)return 1;
    for(i=2;i*i<=a;i++)
        if(a%i==0)return 0;
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n/2+1;i>=2;i--)
	{
        if(isPrime(i)&&isPrime(n-i))
		{
            printf("%d",i*(n-i));
            break;
        }
    }
    return 0;
}
