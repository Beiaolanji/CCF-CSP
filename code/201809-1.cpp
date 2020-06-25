#include <cstring>
#include <iostream>

using namespace std;

const int MAXN = 1010;

int a[MAXN];

int main() {
  int n;
  scanf("%d", &n);
  memset(a, 0, sizeof(a));
  for (int i = 1; i <= n; i++) {
    scanf("%d", a + i);
  }
  for (int i = 1; i <= n; i++) {
    if (i == 1) {
      printf("%d ", (a[1] + a[2]) / 2);
    } else if (i == n) {
      printf("%d", (a[n - 1] + a[n]) / 2);
    } else {
      printf("%d ", (a[i - 1] + a[i] + a[i + 1]) / 3);
    }
  }
  return 0;
}
