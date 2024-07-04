#include <stdio.h>

#define MAX 15

int matrix[MAX][MAX] = {0};

void generate_triangle(int num) {
  for (int i = 0; i <= MAX; i++) {
    matrix[i][0] = 1;
  }

  for (int i = 1; i <= num; i++) {
    for (int j = 1; j <= num; j++) {
      matrix[i][j] = matrix[i - 1][j] + matrix[i - 1][j - 1];
    }
  }
}

void print_matrix(int num) {
  for (int i = 0; i <= num; i++) {
    for (int j = 0; j <= num; j++) {
      if (matrix[i][j] > 0) {
        printf("%d ", matrix[i][j]);
      }
    }
    printf("\n");
  }
}

int prompt_user() {
  int num = 0;
  while (1) {
    printf("How many lines? ");
    scanf("%d", &num);
    if (num < 1) {
      printf("Number should be bigger or equal than 1.");
    } else if (num > 15) {
      printf("Limit of 15 lines exceeded.");
    } else {
      return num;
    }
  }
}

int main() {
  int x = prompt_user();
  generate_triangle(x);
  print_matrix(x);
  return 0;
}
