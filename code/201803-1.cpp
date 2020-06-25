#include <iostream>
using namespace std;
int main() {
  int flag = 1;
  int count = 0;
  int grade = 0;
  while (true) {
    cin >> flag;
    if (flag == 1) {
      grade += 1;
      count = 0;
    } else if (flag == 2) {
      count += 2;
      grade += count;
    } else {
      break;
    }
  }
  cout << grade << endl;
  return 0;
}
