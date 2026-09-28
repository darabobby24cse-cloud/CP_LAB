#include <stdio.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],x[n*m],y[n*m];
    int f=0,l=0,r=0,t=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1) f++;
            if(a[i][j]==2){x[r]=i;y[r++]=j;}
        }
    int dx[]={-1,1,0,0},dy[]={0,0,-1,1};
    while(l<r){
        int s=r-l,c=0;
        while(s--){
            int i=x[l],j=y[l++];
            for(int k=0;k<4;k++){
                int p=i+dx[k],q=j+dy[k];
                if(p>=0&&p<n&&q>=0&&q<m&&a[p][q]==1){
                    a[p][q]=2;x[r]=p;y[r++]=q;
                    f--;c=1;
                }
            }
        }
        if(c)t++;
    }
    printf("%d",f?-1:t);
    return 0;
}
