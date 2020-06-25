#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    v[i] = temp;
  }
  for (int i = 0; i < n; i++) {
    int count1 = 0, count2 = 0;
    for (int j = 0; j < n; j++) {
      if (v[i] < v[j])
        count1++;
      else if (v[i] > v[j])
        count2++;
    }
    if (count1 == count2) {
      cout << v[i];
      return 0;
    }
  }
  cout << -1;
  return 0;
}
