#include <cstring>
#include <iostream>
using namespace std;

struct JUXING {
  int x1;
  int x2;
  int y1;
  int y2;
};

int a[105][105];

int main() {
  int n;
  memset(a, 0, sizeof(a));
  scanf("%d", &n);
  JUXING juxing[n];
  for (int i = 0; i < n; i++) {
    scanf("%d%d%d%d", &juxing[i].x1, &juxing[i].y1, &juxing[i].x2,
          &juxing[i].y2);
    for (int j = juxing[i].x1; j <= juxing[i].x2 - 1; j++) {
      for (int k = juxing[i].y1; k <= juxing[i].y2 - 1; k++) {
        a[j][k] = 1;
      }
    }
  }

  int max_x = 0, max_y = 0;
  int min_x = INT_MAX, min_y = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (juxing[i].x1 < min_x) min_x = juxing[i].x1;
    if (juxing[i].y1 < min_y) min_y = juxing[i].y1;
    if (juxing[i].x2 > max_x) max_x = juxing[i].x2;
    if (juxing[i].y2 > max_y) max_y = juxing[i].y2;
  }
  int count = 0;
  for (int i = min_x; i <= max_x; i++) {
    for (int j = min_y; j <= max_y; j++) {
      if (a[i][j] == 1) count++;
    }
  }
  printf("%d", count);
  return 0;
}
