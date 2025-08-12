#include <stdio.h>

void merge(int a[], int t[], int l, int m, int r){
    int i=l,j=m+1,k=l;
    while(i<=m && j<=r){
        if(a[i]<=a[j]) t[k++]=a[i++];
        else t[k++]=a[j++];
    }
    while(i<=m) t[k++]=a[i++];
    while(j<=r) t[k++]=a[j++];
    for(i=l;i<=r;i++) a[i]=t[i];
}

void mergesort(int a[], int t[], int l, int r){
    if(l>=r) return;
    int m=(l+r)/2;
    mergesort(a,t,l,m);
    mergesort(a,t,m+1,r);
    merge(a,t,l,m,r);
}

int main(){
    int n,i;
    if(scanf("%d",&n)!=1) return 0;
    int a[n], t[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    if(n>0) mergesort(a,t,0,n-1);
    for(i=0;i<n;i++) printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
