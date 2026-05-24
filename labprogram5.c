#include<stdio.h>

int min(int a, int b)
{
    return (a < b) ? a : b;
}

void floyds(int cost[10][10], int n)
{
    int i, j, k;

    for(k = 1; k <= n; k++)
    {
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= n; j++)
            {
                cost[i][j] = min(cost[i][j],
                                 cost[i][k] + cost[k][j]);
            }
        }
    }
}

int main()
{
    int n, cost[10][10], i, j;

    printf("Enter the number of vertices:\n");
    scanf("%d", &n);

    printf("Enter the cost matrix:\n");

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
        }
    }

    floyds(cost, n);

    printf("All pairs shortest path matrix is:\n");

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("%d\t", cost[i][j]);
        }

        printf("\n");
    }
}