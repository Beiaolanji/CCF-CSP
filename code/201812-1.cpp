#include <iostream>

using namespace std;

int main() {
  int r, y, g;
  scanf("%d %d %d", &r, &y, &g);
  int n;
  scanf("%d", &n);
  int k, t;
  long long result = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &k, &t);
    switch (k) {
      case 3:
        break;
      case 2:
        result += (t + r);
        break;
      default:
        result += t;
        break;
    }
  }
  printf("%lld", result);
  return 0;
}
