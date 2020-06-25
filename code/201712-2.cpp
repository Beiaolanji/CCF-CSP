#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  scanf("%d%d", &n, &k);
  int i = 0, j = -1;
  int count = n;
  vector<bool> children(n, true);
  while (count != 1) {
    ++i;
    j = (++j) % n;
    while (children[j] == false) {
      j = (++j) % n;
    }
    if (i % k == 0 || i % 10 == k) {
      children[j] = false;
      count--;
    }
  }
  for (auto i = children.begin(); i < children.end(); i++) {
    if (*i == true) {
      printf("%d", i - children.begin() + 1);
    }
  }

  return 0;
}
