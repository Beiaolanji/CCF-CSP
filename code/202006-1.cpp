#include <string.h>

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> a;
  vector<pair<int, int>> b;
  pair<int, int> temp;
  int count_a = 0, count_b = 0;
  int x, y;
  char t;
  for (int i = 0; i < n; i++) {
    cin >> x >> y >> t;
    temp = make_pair(x, y);
    if (t == 'A') {
      a.push_back(temp);
      count_a++;
    } else {
      b.push_back(temp);
    }
  }
  count_b = n - count_a;
  int z;
  for (int i = 0; i < m; i++) {
    bool flag1 = true;
    bool flag2 = true;
    cin >> z >> x >> y;
    if (x * a[0].first + y * a[0].second + z < 0)
      flag1 = true;
    else
      flag1 = false;
    for (int j = 1; j < count_a; j++) {
      if ((x * a[j].first + y * a[j].second + z < 0 && flag1 == false) ||
          (x * a[j].first + y * a[j].second + z > 0 && flag1 == true)) {
        cout << "No" << endl;
        flag2 = false;
        break;
      }
    }
    if (flag2) {
      for (int j = 0; j < count_b; j++) {
        if ((x * b[j].first + y * b[j].second + z < 0 && flag1 == true) ||
            (x * b[j].first + y * b[j].second + z > 0 && flag1 == false)) {
          cout << "No" << endl;
          flag2 = false;
          break;
        }
      }
    }
    if (flag2) {
      cout << "Yes" << endl;
    }
  }
  return 0;
}
