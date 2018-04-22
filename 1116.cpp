#include <stdio.h>
int main(){
    int n,i,a,b,cnt=1,max=-999999;
    scanf("%d",&n);
    scanf("%d",&a);
    for(i=2;i<=n;i++){
        scanf("%d",&b);
        if(a==b){
            cnt++;
            if(cnt>max)max=cnt;
        }else{
            a=b;
            cnt=1;
        }
    }
    printf("%d",max);
    return 0;
}
