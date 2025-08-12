#include <stdio.h>
int main(){
    int n,i,k,l,r,mid,found=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&k);
    l=0; r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==k){ found=1; break; }
        if(k<a[mid]) r=mid-1; else l=mid+1;
    }
    printf(found?"FOUND\n":"NOT FOUND\n");
    return 0;
}
