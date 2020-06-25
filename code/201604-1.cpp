#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> v(n);
  for (int i = 0; i < n; i++) scanf("%d", &v[i]);
  int count = 0;
  for (int i = 1; i < n - 1; i++) {
    if ((v[i] < v[i - 1] && v[i] < v[i + 1]) ||
        (v[i] > v[i - 1] && v[i] > v[i + 1]))
      count++;
  }
  printf("%d", count);
  return 0;
}
