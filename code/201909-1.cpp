#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  vector<int> origin(n);
  vector<int> sub(n);
  int all_apple = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &origin[i]);
    int sum = 0;
    for (int j = 0; j < m; j++) {
      int temp;
      scanf("%d", &temp);
      sum += temp;
    }
    sub[i] = sum;
    all_apple += origin[i] + sub[i];
  }
  int min = sub[0];
  int position = 0;
  for (int i = 0; i < n; i++) {
    if (sub[i] < min) {
      position = i;
      min = sub[i];
    }
  }
  printf("%d %d %d", all_apple, position + 1, -(sub[position]));
  return 0;
}
