#include <iostream>

using namespace std;

int n, m;
int a[1005][1005];
int main() {
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int j = m - 1; j >= 0; j--) {
    for (int i = 0; i < n; i++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
