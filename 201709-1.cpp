#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  n /= 10;
  int result = n;
  if (n / 5) {
    result += (n / 5) * 2;
    n -= (n / 5) * 5;
  }
  if (n / 3) {
    result += (n / 3);
  }
  cout << result;
  return 0;
}
