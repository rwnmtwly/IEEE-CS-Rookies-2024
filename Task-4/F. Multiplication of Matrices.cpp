#include<iostream>

int main() {
  int rows1, cols1; // Number of rows and columns for the first matrix
  std::cin >> rows1 >> cols1;
  
  int matrix1[rows1][cols1];
  for(int i = 0; i < rows1; i++) {
    for(int j = 0; j < cols1; j++) {
      std:: cin >> matrix1[i][j];
    }
  }

  int rows2, cols2; // Number of rows and columns for the second matrix
  std::cin >> rows2 >> cols2;

  int matrix2[rows2][cols2];
  for(int i = 0; i < rows2; i++) {
    for(int j = 0; j < cols2; j++) {
      std:: cin >> matrix2[i][j];
    }
  }

  // Multiplication result matrix
  int result[rows1][cols2];
  for(int i = 0; i < rows1; i++) {
    for(int j = 0; j < cols2; j++) {
      result[i][j] = 0;
    }
  }
  
  // Matrix multiplication
  for(int i = 0; i < rows1; i++) {
    for(int j = 0; j < cols2; j++) {
      for(int k = 0; k < cols1; k++) {
        result[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }

  // Displaying the result matrix
  for(int i = 0; i < rows1; i++) {
    for(int j = 0; j < cols2; j++) {
      std::cout << result[i][j] << " ";
    }
    std::cout << "\n";
  }

  return 0;
}
