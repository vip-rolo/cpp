#include <stdio.h>
int a[100+10],b[100+10],c[100+10];
int max=1;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    { 
        b[i]=1;
        for(j=1;j<i;j++)
            if(a[j]<a[i])
            {
                if(b[j]+1>b[i])
                    b[i]=b[j]+1;
            }
    }
    for(i=n;i>=1;i--)
    {
        c[i]=1;
        for(j=n;j>i;j--)
            if(a[j]<a[i])
                if(c[j]+1>c[i])
                    c[i]=c[j]+1;
    }
    for(i=1;i<=n;i++)
        if(max<b[i]+c[i])
            max=b[i]+c[i];
    printf("%d\n",n-max+1);
}
