#include <iostream>
using namespace std;

bool judge(int a, int b, int x1, int x2, int y1, int y2) {
  return a >= x1 && a <= x2 && b >= y1 && b <= y2;
}

int main() {
  int n, k, t, left_x, down_y, right_x, up_y;
  cin >> n >> k >> t >> left_x >> down_y >> right_x >> up_y;
  int result1 = 0, result2 = 0;
  int x, y;
  for (int i = 0; i < n; i++) {
    int count = 0;
    bool flag = false;
    for (int j = 0; j < t; j++) {
      cin >> x >> y;
      /*判断点是否在矩形内部或边缘*/
      if (judge(x, y, left_x, right_x, down_y, up_y)) {
        flag = true;
        count++;
      } else {
        count = 0;
      }
      if (count == k) {
        result2++;
        /*抵消掉多余的输入*/
        for (int temp = j + 1; temp < t; temp++) {
          cin >> x >> y;
        }
        break;
      }
    }
    if (flag) {
      result1++;
    }
  }
  cout << result1 << endl << result2 << endl;

  return 0;
}