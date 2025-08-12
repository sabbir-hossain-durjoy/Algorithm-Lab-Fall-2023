#include <stdio.h>
int main(){
    long long amount; int coins[]={10,5,2,1}, used[4]={0}, i;
    scanf("%lld",&amount);
    for(i=0;i<4;i++){ used[i]=amount/coins[i]; amount%=coins[i]; }
    for(i=0;i<4;i++) if(used[i]) printf("%d %d\n",coins[i],used[i]);
    return 0;
}
