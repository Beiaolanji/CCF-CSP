#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int a[1005];
int b[1005];

int main() {
  int n;
  vector<int> result;
  memset(b, 0, sizeof(b));
  scanf("%d", &n);
  scanf("%d", &a[0]);
  b[a[0]]++;
  result.push_back(b[a[0]]);
  for (int i = 1; i < n; i++) {
    scanf("%d", &a[i]);
    b[a[i]]++;
    result.push_back(b[a[i]]);
  }
  for (auto i : result) {
    printf("%d ", i);
  }
  return 0;
}
