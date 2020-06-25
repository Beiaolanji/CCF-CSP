#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int temp;
    scanf("%d", &temp);
    v.push_back(temp);
  }
  int min = abs(v[0] - v[1]);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int temp_abs = abs(v[i] - v[j]);
      if (temp_abs < min) {
        min = temp_abs;
      }
    }
  }
  printf("%d", min);
  return 0;
}
