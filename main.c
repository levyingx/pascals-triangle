#include <stdio.h>

// C(n, r) = C(n - 1, r) + C(n - 1, r - 1)

int matrix[10][10] = {0};

void generateTriangle() {
  for (int i = 0; i < 10; i++) {
    matrix[i][0] = 1;
  }

  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      matrix[i][j] = matrix[i - 1][j] + matrix[i - 1][j - 1];
    }
  }
}

void printMatrix() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (matrix[i][j] > 0) {
        printf("%d ", matrix[i][j]);
      }
    }
    printf("\n");
  }
}

int main() {
  generateTriangle();
  printMatrix();
  return 0;
}
