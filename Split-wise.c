#include <stdio.h>

#define N 3

// A function that returns index of minimum value in arr[]
int getMin(int arr[]) {
    int minInd = 0;
    for (int i = 1; i < N; i++)
        if (arr[i] < arr[minInd])
            minInd = i;
    return minInd;
}

// A function that returns index of maximum value in arr[]
int getMax(int arr[]) {
    int maxInd = 0;
    for (int i = 1; i < N; i++)
        if (arr[i] > arr[maxInd])
            maxInd = i;
    return maxInd;
}

// A function to return minimum of 2 values
int minOf2(int x, int y) {
    return (x < y) ? x : y;
}

// amount[p] indicates the net amount to be credited/debited to/from person 'p'
// If amount[p] is positive, then i'th person will amount[i]
// If amount[p] is negative, then i'th person will give -amount[i]
void minCashFlowRec(int amount[]) {
    int mxCredit = getMax(amount), mxDebit = getMin(amount);

    if (amount[mxCredit] == 0 && amount[mxDebit] == 0)
        return;

    int min = minOf2(-amount[mxDebit], amount[mxCredit]);
    amount[mxCredit] -= min;
    amount[mxDebit] += min;

    printf("Person %d pays %d to Person %d\n", mxDebit, min, mxCredit);

    minCashFlowRec(amount);
}

// Given a set of persons as graph[][] where graph[i][j] indicates the amount that person i needs to pay person j,
// this function finds and prints the minimum cash flow to settle all debts.
void minCashFlow(int graph[N][N]) {
    int amount[N] = {0};

    for (int p = 0; p < N; p++)
        for (int i = 0; i < N; i++)
            amount[p] += (graph[i][p] - graph[p][i]);

    minCashFlowRec(amount);
}

int main() {
    int graph[N][N];
    printf("Enter the graph as a %dx%d matrix (row-wise):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    minCashFlow(graph);
    return 0;
}