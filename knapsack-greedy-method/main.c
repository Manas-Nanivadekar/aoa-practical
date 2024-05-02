#include <stdio.h>

struct Item
{
    int value;
    int weight;
};

int compare(const void *a, const void *b)
{
    struct Item *item1 = (struct Item *)a;
    struct Item *item2 = (struct Item *)b;
    double ratio1 = (double)item1->value / item1->weight;
    double ratio2 = (double)item2->value / item2->weight;
    if (ratio1 > ratio2)
    {
        return -1;
    }
    else if (ratio1 < ratio2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void knapsackGreedy(struct Item items[], int n, int capacity)
{

    qsort(items, n, sizeof(struct Item), compare);

    int totalValue = 0;
    int totalWeight = 0;

    for (int i = 0; i < n; i++)
    {
        if (totalWeight + items[i].weight <= capacity)
        {
            totalValue += items[i].value;
            totalWeight += items[i].weight;
        }
        else
        {

            double fraction = (double)(capacity - totalWeight) / items[i].weight;
            totalValue += items[i].value * fraction;
            totalWeight += items[i].weight * fraction;
            break;
        }
    }

    printf("Total value: %d\n", totalValue);
    printf("Total weight: %d\n", totalWeight);
}

int main()
{

    struct Item items[] = {
        {60, 10},
        {100, 20},
        {120, 30}};
    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 50;

    knapsackGreedy(items, n, capacity);

    return 0;
}