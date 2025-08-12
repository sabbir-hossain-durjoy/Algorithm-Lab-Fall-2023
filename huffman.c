#include <stdio.h>
int main(){
    int n,i,j,next,a,b,root,len;
    scanf("%d",&n);
    if(n<=0) return 0;
    int f[512], l[512], r[512], p[512];
    char ch[512], code[512];
    for(i=0;i<n;i++){ scanf(" %c %d",&ch[i],&f[i]); l[i]=r[i]=-1; p[i]=-1; }
    next=n;
    while(next<2*n-1){
        a=-1; for(i=0;i<next;i++) if(p[i]==-1) if(a==-1||f[i]<f[a]) a=i;
        p[a]=-2;
        b=-1; for(i=0;i<next;i++) if(p[i]==-1) if(b==-1||f[i]<f[b]) b=i;
        p[a]=next; p[b]=next;
        ch[next]=0; f[next]=f[a]+f[b]; l[next]=a; r[next]=b; p[next]=-1;
        next++;
    }
    root=2*n-2;
    if(n==1){ printf("%c 0\n",ch[0]); return 0; }
    for(i=0;i<n;i++){
        int cur=i; len=0;
        while(p[cur]!=-1){
            int par=p[cur];
            code[len++]=(l[par]==cur)?'0':'1';
            cur=par;
        }
        printf("%c ",ch[i]);
        for(j=len-1;j>=0;j--) putchar(code[j]);
        putchar('\n');
    }
    return 0;
}
