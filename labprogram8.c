#include<stdio.h>

int main()
{
    int cost[10][10];
    int visited[10] = {0};
    int n, i, j;
    int min, a, b;
    int ne = 1;
    int mincost = 0;

    printf("Enter number of vertices:\n");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);

            if(cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }

    visited[1] = 1;

    printf("\nEdges in Minimum Spanning Tree are:\n");

    while(ne < n)
    {
        min = 999;

        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= n; j++)
            {
                if(cost[i][j] < min)
                {
                    if(visited[i] != 0)
                    {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }

        if(visited[b] == 0)
        {
            printf("%d edge (%d,%d) = %d\n", ne++, a, b, min);

            mincost += min;

            visited[b] = 1;
        }

        cost[a][b] = cost[b][a] = 999;
    }

    printf("\nMinimum cost = %d\n", mincost);

    return 0;
}