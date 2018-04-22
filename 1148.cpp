#include <stdio.h>
#include <string.h>
char b[1100];
int main()
{
    int k,i=0,len,cnt;
    scanf("%d%s",&k,b);
    len=strlen(b);
    while(i<len)
	{
        cnt=0;
        while(i+cnt<len&&b[i+cnt]==b[i])cnt++;
        if(cnt>=k){
            printf("%c",b[i]);
            break;
        }
        i+=cnt;
    }
    if(cnt<k)
        printf("No");
    return 0;
}
