#include <iostream>
#include <algorithm>

const int MAX_N = 20;
const int MAX_W = 100;

int weights[MAX_N];
int values[MAX_N];

int knapsack(int n, int w) {
    // Base case: If no items or no capacity left
    if (n == 0 || w == 0) {
        return 0;
    }

    // If the weight of the current item exceeds the remaining capacity, skip it
    if (weights[n - 1] > w) {
        return knapsack(n - 1, w);
    }

    // Consider two cases: either include the current item or exclude it
    int includeItem = values[n - 1] + knapsack(n - 1, w - weights[n - 1]);
    int excludeItem = knapsack(n - 1, w);

    // Return the maximum value
    return std::max(includeItem, excludeItem);
}

int main() {
    int N, W;
    std::cin >> N >> W;

    for (int i = 0; i < N; ++i) {
        std::cin >> weights[i] >> values[i];
    }

    int result = knapsack(N, W);

    std::cout << result << std::endl;

    return 0;
}
