#include <stdio.h>
#include <string.h>
char a[1100];
int main(){
    int i=0,len,cnt;
    scanf("%s",a);
    len=strlen(a);
    while(i<len){
        cnt=0;
        while(i+cnt<len&&a[i]==a[i+cnt])cnt++;
        printf("%d%d",cnt,a[i]-'0');
        i+=cnt;
    }
    return 0;
}
