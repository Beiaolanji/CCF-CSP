#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct record {
  int num;
  int how_often;
};

bool cmp(record a, record b) {
  return (a.how_often == b.how_often ? a.num < b.num
                                     : a.how_often > b.how_often);
}

int main() {
  int n;
  scanf("%d", &n);
  vector<struct record> v;
  for (int i = 0; i < n; i++) {
    bool flag = false;
    int index;
    int temp;
    scanf("%d", &temp);
    if (!v.empty()) {
      for (int i = 0; i < v.size(); i++) {
        if (temp == v[i].num) {
          flag = true;
          index = i;
          break;
        }
      }
    }
    if (flag) {
      v[index].how_often++;
    } else {
      record temp_record;
      temp_record.num = temp;
      temp_record.how_often = 1;
      v.push_back(temp_record);
    }
  }
  sort(v.begin(), v.end(), cmp);
  for (auto i : v) {
    printf("%d %d\n", i.num, i.how_often);
  }
  return 0;
}
