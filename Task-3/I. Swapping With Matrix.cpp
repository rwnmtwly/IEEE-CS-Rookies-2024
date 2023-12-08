#include <iostream>

void switchingFunction(int n, int x, int y, int matrix[][500]) {
    // Swap rows
    for (int j = 0; j < n; j++) {
        int temp = matrix[x - 1][j];
        matrix[x - 1][j] = matrix[y - 1][j];
        matrix[y - 1][j] = temp;
    }

    // Swap columns
    for (int i = 0; i < n; i++) {
        int temp = matrix[i][x - 1];
        matrix[i][x - 1] = matrix[i][y - 1];
        matrix[i][y - 1] = temp;
    }

    // Print the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n, x, y;
    std::cin >> n >> x >> y;

    int matrix[500][500];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    switchingFunction(n, x, y, matrix);

    return 0;
}
