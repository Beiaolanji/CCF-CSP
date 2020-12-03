#include <algorithm>
#include <iostream>
using namespace std;
struct dist {
  int pos;
  int val;
};

bool cmp(dist a, dist b) {
  if (a.val == b.val) {
    return a.pos < b.pos;
  } else {
    return a.val < b.val;
  }
}

int main() {
  int n, X, Y;
  cin >> n >> X >> Y;
  dist d[n];
  int x, y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    d[i].pos = i + 1;
    d[i].val = (X - x) * (X - x) + (Y - y) * (Y - y);
  }
  sort(d, d + n, cmp);
  cout << d[0].pos << endl << d[1].pos << endl << d[2].pos;
  return 0;
}