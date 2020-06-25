#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> v;
  int temp;
  int count = 0;
  scanf("%d", &temp);
  v.push_back(temp);
  for (int i = 1; i < n; i++) {
    scanf("%d", &temp);
    for (auto i : v)
      if (abs(i - temp) == 1) count++;
    v.push_back(temp);
  }
  printf("%d", count);
  return 0;
}
