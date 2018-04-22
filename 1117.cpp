#include <stdio.h>
#include <string.h>
int a[20100],b[20100];
int main()
{
    int n,i,j;
    memset(b,0,sizeof(b));
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
        scanf("%d",&a[i]);
        if(b[a[i]]==0)
		{
            printf("%d ",a[i]);
            b[a[i]]=1;
        }
    }
    return 0;
}
