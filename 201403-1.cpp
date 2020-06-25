#include <iostream>

using namespace std;

int a[505];

int main() {
  int n;
  cin >> n;
  int count = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    for (int j = 0; j < i; j++) {
      if (a[i] == -a[j]) {
        count++;
      }
    }
  }
  printf("%d", count);
  return 0;
}
