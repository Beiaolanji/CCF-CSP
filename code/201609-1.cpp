#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  int a, b;
  scanf("%d", &n);
  scanf("%d%d", &a, &b);
  int max = abs(a - b);
  int count = 1;
  for (int i = 2; i < n; i++) {
    int temp;
    if ((count++) % 2)
      scanf("%d", &a);
    else
      scanf("%d", &b);
    temp = abs(a - b);
    if (temp > max) max = temp;
  }
  printf("%d", max);
  return 0;
}
