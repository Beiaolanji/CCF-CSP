#include <iostream>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int a[2];
  scanf("%d", &a[0]);
  int count = 0;
  count++;
  for (int i = 1; i < n; i++) {
    scanf("%d", &a[i % 2]);
    if (a[i % 2] != a[(i + 1) % 2]) count++;
  }
  printf("%d", count);
  return 0;
}
