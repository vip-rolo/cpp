#include <cstdio>
#include <cstring>
char a[30];
int main()
{
    int n,i,len,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
        scanf("%s",a);
        len=strlen(a);
        if('a'<=a[0]&&a[0]<='z')a[0]=a[0]-'a'+'A';
        for(j=1;j<len;j++)if('A'<=a[j]&&a[j]<='Z')a[j]=a[j]-'A'+'a';
        printf("%s\n",a);
    }
    return 0;
}
