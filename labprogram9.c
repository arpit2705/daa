#include<stdio.h>
#include<stdlib.h>
int parent[10];
int main()
{
int mincost = 0;
int cost[10][10];
int n,i,j,ne=1;
int a,b,u,v,min;
printf("Enter the number of vertices:\n");
scanf("%d",&n);
printf("Enter the cost matrix:\n");
for( i = 1;i<=n;i++)
{
for(j = 1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j] == 0)
cost[i][j] = 999;
}
}
printf("The edge of the minimum spanning tree:\n");
while(ne<n)
{
min = 999;
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(cost[i][j] < min)
{
min = cost[i][j];
a = u = i;
b = v = j;
}
}
}
while(parent[u])
u = parent[u];
while(parent[v])
v = parent[v];
if( u != v)
{
printf("%d edge (%d,%d) = %d\n",ne++,a,b,min);
mincost += min;
parent[v] = u;
}
cost[a][b] = cost[b][a] = 999;
}
printf("\n minimum cost is %d\n",mincost);
return 0;
}

