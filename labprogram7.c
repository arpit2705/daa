#include<stdio.h>

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int n, i, j, capacity;
    int weight[20], value[20];
    int v[50][50];
    int w;

    printf("Enter the number of items:\n");
    scanf("%d", &n);

    printf("Enter weight and value of each item:\n");

    for(i = 1; i <= n; i++)
    {
        scanf("%d%d", &weight[i], &value[i]);
    }

    printf("Enter the capacity of knapsack:\n");
    scanf("%d", &capacity);

    // Build DP table
    for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= capacity; j++)
        {
            if(i == 0 || j == 0)
            {
                v[i][j] = 0;
            }
            else if(j - weight[i] >= 0)
            {
                v[i][j] = max(v[i-1][j],
                              v[i-1][j-weight[i]] + value[i]);
            }
            else
            {
                v[i][j] = v[i-1][j];
            }

            printf("%4d", v[i][j]);
        }

        printf("\n");
    }

    // Find selected items
    w = capacity;

    printf("\nItems included are:\n");

    for(i = n; i > 0; i--)
    {
        if(v[i][w] == v[i-1][w])
        {
            continue;
        }
        else
        {
            printf("Item %d\n", i);
            w = w - weight[i];
        }
    }

    printf("\nTotal Profit = %d\n", v[n][capacity]);

    return 0;
}