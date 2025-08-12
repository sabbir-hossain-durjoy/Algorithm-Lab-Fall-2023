#include <stdio.h>
int main(){
    int n,cap,i,j,bins=0,placed;
    scanf("%d",&n);
    int w[200], rem[200];
    for(i=0;i<n;i++) scanf("%d",&w[i]);
    scanf("%d",&cap);
    for(i=0;i<n;i++){
        if(w[i]>cap){ printf("-1\n"); return 0; }
        placed=0;
        for(j=0;j<bins;j++) if(rem[j]>=w[i]){ rem[j]-=w[i]; placed=1; break; }
        if(!placed){ rem[bins]=cap-w[i]; bins++; }
    }
    printf("%d\n",bins);
    return 0;
}
