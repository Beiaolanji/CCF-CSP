#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int op(char c) {
  if (c == 'x')
    return 0;
  else if (c == '/')
    return 1;
  else if (c == '+')
    return 2;
  else
    return 3;
}

void check(string s) {
  stack<int> stc;
  stc.push(s[0] - '0');
  for (int i = 1; i < 7; i++) {
    /*如果是乘号和除号就直接将前后的数字运算并且压栈
    如果是加号就把后面的数字压栈
    如果是减号就把后面数字的相反数压栈*/
    int temp;
    switch (op(s[i])) {
      case 0:
        temp = stc.top();
        stc.pop();
        stc.push(temp * (s[++i] - '0'));
        break;
      case 1:
        temp = stc.top();
        stc.pop();
        stc.push(temp / (s[++i] - '0'));
        break;
      case 2:
        stc.push(s[++i] - '0');
        break;
      case 3:
        stc.push(-(s[++i] - '0'));
        break;
    }
  }
  int sum = 0;
  while (!stc.empty()) {
    sum += stc.top();
    stc.pop();
  }
  cout << (sum == 24 ? "Yes" : "No") << endl;
}

int main() {
  int n;
  cin >> n;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    check(s);
  }
  return 0;
}
