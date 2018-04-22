#include <stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(b=1;b<=n;b++){
        a=((1+b)*b-2*n)/6;
        if(0<a&&a<=b&&(1+b)*b-6*a==2*n)
		{
            printf("%d %d",a,b);
            break;
        }
    }
    return 0;
}

