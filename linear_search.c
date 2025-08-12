#include <stdio.h>
int main(){
    int n,i,k,found=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++) if(a[i]==k){ found=1; break; }
    printf(found?"FOUND\n":"NOT FOUND\n");
    return 0;
}
