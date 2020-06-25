#include <iostream>
#include <set>
using namespace std;

int a[10005];

int main() {
  int n;
  int result;
  scanf("%d", &n);
  set<int> s;
  for (int i = 0; i < n; i++) {
    int temp;
    scanf("%d", &temp);
    s.insert(temp);
    a[temp]++;
  }
  int max = a[*s.begin()];
  result = *s.begin();
  s.erase(s.begin());
  while (!s.empty()) {
    if (max < a[*s.begin()]) {
      result = *s.begin();
      max = a[*s.begin()];
    }
    s.erase(s.begin());
  }
  printf("%d", result);
  return 0;
}
