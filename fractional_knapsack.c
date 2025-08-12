#include <stdio.h>
int main(){
    int n,i,j,m; double cap,total=0;
    scanf("%d",&n);
    double v[200], w[200], r[200];
    for(i=0;i<n;i++){ scanf("%lf%lf",&v[i],&w[i]); r[i]=v[i]/w[i]; }
    scanf("%lf",&cap);
    for(i=0;i<n-1;i++){ m=i; for(j=i+1;j<n;j++) if(r[j]>r[m]) m=j;
        double tv=v[i]; v[i]=v[m]; v[m]=tv;
        double tw=w[i]; w[i]=w[m]; w[m]=tw;
        double tr=r[i]; r[i]=r[m]; r[m]=tr;
    }
    for(i=0;i<n && cap>0;i++){
        if(w[i]<=cap){ total+=v[i]; cap-=w[i]; }
        else { total+=r[i]*cap; cap=0; }
    }
    printf("%.2f\n",total);
    return 0;
}
