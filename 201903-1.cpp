#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a;
  int max, min;
  float middle;
  for (int i = 0; i < n; i++) {
    int temp;
    scanf("%d", &temp);
    a.push_back(temp);
  }
  if (a[0] >= a[n - 1]) {
    max = a[0];
    if (n % 2)
      middle = float(a[n / 2]);
    else
      middle = (float(a[n / 2 - 1]) + float(a[n / 2])) / 2;
    min = a[n - 1];
  } else {
    max = a[n - 1];
    if (n % 2)
      middle = float(a[n / 2]);
    else
      middle = (float(a[n / 2 - 1]) + float(a[n / 2])) / 2;
    min = a[0];
  }
  printf("%d ", max);
  if (middle > int(middle))
    printf("%.1f ", middle);
  else
    printf("%d ", int(middle));
  printf("%d", min);
  return 0;
}
