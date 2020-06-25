#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int a[3000][2000];

struct XY {
  int x1;
  int y1;
  int x2;
  int y2;
};

int main() {
  memset(a, -1, sizeof(a));
  int n, m;
  scanf("%d%d", &n, &m);
  vector<struct XY> v;
  XY temp_xy;
  int x1, x2, y1, y2;
  for (int i = 0; i < n; i++) {
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    for (int j = x1; j <= x2; j++) {
      for (int k = y1; k <= y2; k++) {
        a[j][k] = i;
      }
    }
    temp_xy.x1 = x1;
    temp_xy.x2 = x2;
    temp_xy.y1 = y1;
    temp_xy.y2 = y2;
    v.push_back(temp_xy);
  }
  for (int i = 0; i < m; i++) {
    scanf("%d%d", &x1, &y1);
    int temp = a[x1][y1];
    if (temp == -1) {
      printf("IGNORED\n");
    } else {
      printf("%d\n", temp + 1);
      x1 = v[temp].x1;
      x2 = v[temp].x2;
      y1 = v[temp].y1;
      y2 = v[temp].y2;
      for (int j = x1; j <= x2; j++) {
        for (int k = y1; k <= y2; k++) {
          a[j][k] = temp;
        }
      }
    }
  }
  return 0;
}
