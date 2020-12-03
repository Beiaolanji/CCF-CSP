#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
  int a, b, n;
  long long int sum = 0;
  scanf("%d%d%d", &n, &a, &b);
  map<int, int> mp;
  int temp_index, temp_value;
  for (int i = 0; i < a; i++) {
    scanf("%d%d", &temp_index, &temp_value);
    mp[temp_index] = temp_value;
  }
  for (int i = 0; i < b; i++) {
    scanf("%d%d", &temp_index, &temp_value);
    if (mp[temp_index]) {
      sum += (mp[temp_index] * temp_value);
    }
  }
  printf("%lld\n", sum);
  return 0;
}