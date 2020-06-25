#include <iostream>

using namespace std;

int n;
int a[1005][1005];

int main() {
  scanf("%d", &n);
  //   int a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  int row = 0, col = 0;
  printf("%d ", a[row][col]);
  while (true) {
    if (row == n - 1 && col == n - 1) break;
    if ((row == 0 || row == n - 1) && col != n - 1) {
      printf("%d ", a[row][++col]);
    } else {
      printf("%d ", a[++row][col]);
    }
    if (row == n - 1 && col == n - 1) break;

    while (col != 0 && row != n - 1) {
      printf("%d ", a[++row][--col]);
    }

    if ((col == 0 || col == n - 1) && row != n - 1) {
      printf("%d ", a[++row][col]);
    } else {
      printf("%d ", a[row][++col]);
    }
    if (row == n - 1 && col == n - 1) break;

    while (col != n - 1 && row != 0) {
      printf("%d ", a[--row][++col]);
    }
  }
  return 0;
}
