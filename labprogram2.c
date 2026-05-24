#include<stdio.h>
#include<stdlib.h>
int i,j,n;
int f=0,r=0;
int a[10][10],q[10],visited[10];
void bfs(int u)
{
    int v;
    visited[u] = 1;
    q[r] =u;
    while(f<=r){
        u = q[f++];
        for(v=1;v<=n;v++){
            if(a[u][v]==1 && visited[v]==0){
                visited[v] = 1;
                q[++r] =v;
            }
        }
    }
}
    void main(){
        int source;
        printf("Enter the number of vertices:\n");
        scanf("%d",&n);
        printf("Enter the adjacency matrix:\n");
        for(int i =1;i<=n;i++){
            for(int j=1;j<=n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the source vertex:\n");
        scanf("%d",&source);
        for(int i=1;i<=n;i++){
            visited[i] = 0;
        }
        bfs(source);
        printf("Reachable vertices are:\n");
        for(int i =1;i<=n;i++){
            if(visited[i]==1){
                printf("%d is visited\n",i);
            }
        }
    }

