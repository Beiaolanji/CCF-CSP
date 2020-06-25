#include <iostream>
#include <vector>
using namespace std;

int n, m;

struct Record {
  int row, col;
};

int main() {
  scanf("%d%d", &n, &m);
  int a[n][m];
  vector<struct Record> record;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  int count = 0;
  Record temp_record;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (j == 0) {
        if (a[i][0] == a[i][1] && a[i][0] == a[i][2]) {
          temp_record.row = i;
          temp_record.col = 0;
          record.push_back(temp_record);
          temp_record.col = 1;
          record.push_back(temp_record);
          temp_record.col = 2;
          record.push_back(temp_record);
        }
      }
      if (j == m - 1) {
        if (a[i][m - 1] == a[i][m - 2] && a[i][m - 1] == a[i][m - 3]) {
          temp_record.row = i;
          temp_record.col = m - 1;
          record.push_back(temp_record);
          temp_record.col = m - 2;
          record.push_back(temp_record);
          temp_record.col = m - 3;
          record.push_back(temp_record);
        }
      }
      if ((j + 1) - 3 >= 0 && j + 3 <= m) {
        if (a[i][j] == a[i][j - 1] && a[i][j] == a[i][j + 1]) {
          temp_record.row = i;
          temp_record.col = j - 1;
          record.push_back(temp_record);
          temp_record.col = j;
          record.push_back(temp_record);
          temp_record.col = j + 1;
          record.push_back(temp_record);
        }
      }
      if (i == 0) {
        if (a[0][j] == a[1][j] && a[0][j] == a[2][j]) {
          temp_record.col = j;
          temp_record.row = 0;
          record.push_back(temp_record);
          temp_record.row = 1;
          record.push_back(temp_record);
          temp_record.row = 2;
          record.push_back(temp_record);
        }
      }
      if (i == n - 1) {
        if (a[n - 1][j] == a[n - 2][j] && a[n - 1][j] == a[n - 3][j]) {
          temp_record.col = j;
          temp_record.row = n - 1;
          record.push_back(temp_record);
          temp_record.row = n - 2;
          record.push_back(temp_record);
          temp_record.row = n - 3;
          record.push_back(temp_record);
        }
      }
      if ((i + 1) - 3 >= 0 && i + 3 <= n) {
        if (a[i][j] == a[i - 1][j] && a[i][j] == a[i + 1][j]) {
          temp_record.col = j;
          temp_record.row = i - 1;
          record.push_back(temp_record);
          temp_record.row = i;
          record.push_back(temp_record);
          temp_record.row = i + 1;
          record.push_back(temp_record);
        }
      }
    }
  }
  for (auto i : record) {
    a[i.row][i.col] = 0;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
