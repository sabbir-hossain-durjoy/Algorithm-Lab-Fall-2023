#include <stdio.h>

void swap(int *a,int *b){int t=*a;*a=*b;*b=t;}

int partition(int a[],int l,int r){
    int p=a[r],i=l-1,j;
    for(j=l;j<r;j++) if(a[j]<=p){ i++; swap(&a[i],&a[j]); }
    swap(&a[i+1],&a[r]);
    return i+1;
}

void quicksort(int a[],int l,int r){
    if(l<r){
        int m=partition(a,l,r);
        quicksort(a,l,m-1);
        quicksort(a,m+1,r);
    }
}

int main(){
    int n,i;
    if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    if(n>0) quicksort(a,0,n-1);
    for(i=0;i<n;i++) printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
