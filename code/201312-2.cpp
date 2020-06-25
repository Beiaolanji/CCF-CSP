#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int count = 0;
  int sum = 0;
  for (int i = 0; i <= 10; i++) {
    if (s[i] != '-') {
      sum += (++count) * (s[i] - '0');
    }
  }
  sum %= 11;
  if ((sum == s[12] - '0' && s[12] != 'X') || (sum == 10 && s[12] == 'X')) {
    cout << "Right";
  } else {
    s[12] = (sum == 10 ? 'X' : sum + '0');
    cout << s;
  }

  return 0;
}
