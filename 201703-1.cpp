#include <iostream>

using namespace std;

int main() {
  int n, k;
  scanf("%d%d", &n, &k);
  int count = 0;
  int temp_weight = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    scanf("%d", &temp);
    temp_weight += temp;
    if (temp_weight >= k || i == n - 1) {
      count++;
      temp_weight = 0;
    }
  }
  printf("%d", count);
  return 0;
}
