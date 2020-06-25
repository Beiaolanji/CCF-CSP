#include <iostream>
#include <vector>

using namespace std;

bool check(int x) {
  if (x % 7 == 0) return true;
  while (x > 0) {
    int num = x % 10;
    if (num == 7) return true;
    x /= 10;
  }
  return false;
}

int main() {
  vector<int> result(4, 0);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    if (check(i + 1)) {
      result[i % 4]++;
      n++;
    }
  }
  for (auto i : result) {
    printf("%d\n", i);
  }
  return 0;
}