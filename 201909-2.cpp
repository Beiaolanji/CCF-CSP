#include <iostream>
#include <vector>

using namespace std;

//判断是否有三个连着的一组有掉落
bool check_group(vector<int> a, int i) {
  if (i == 0) {
    //判断a[0]周围
    if (*(a.end() - 1) && a[0] && a[1]) return true;
  } else if (i == a.end() - a.begin() - 1) {
    //判断a[n-1]周围
    if (*(a.end() - 2) && *(a.end() - 1) && a[0]) return true;
  } else {
    //默认情况
    if (a[i - 1] && a[i] && a[i + 1]) return true;
  }
  return false;
}

int main() {
  int n;
  scanf("%d", &n);
  vector<int> apple(n);
  vector<int> drop(n, 0);
  int all_apple = 0;             //记录最后的总苹果数量
  int count_drop = 0;            //记录掉落的苹果数
  int how_many_groups_drop = 0;  //记录有多少三个连着的一组都有掉落
  for (int i = 0; i < n; i++) {
    int m;
    scanf("%d", &m);
    scanf("%d", &apple[i]);
    for (int j = 1; j < m; j++) {
      int temp;
      scanf("%d", &temp);
      if (temp <= 0) {
        //小于等于0的时候是疏果,apple[i]更新位疏果后的结果
        apple[i] += temp;
      } else {
        //大于0的时候是有掉落或者没有掉落,此时直接更新apple[i],并且把drop[i]更新为drop[i]+apple[i]-temp
        drop[i] += apple[i] - temp;
        apple[i] = temp;
      }
    }
    all_apple += apple[i];
    if (drop[i]) count_drop++;
  }
  //   for (int i = 0; i < n; i++) {
  //     if (i == 0) {
  //       if (drop[n - 1] && drop[0] && drop[1]) how_many_groups_drop++;
  //     } else if (i == n - 1) {
  //       if (drop[n - 2] && drop[n - 1] && drop[0]) how_many_groups_drop++;
  //     } else {
  //       if (drop[i - 1] && drop[i] && drop[i + 1]) how_many_groups_drop++;
  //     }
  //   }
  for (int i = 0; i < n; i++) {
    if (check_group(drop, i)) how_many_groups_drop++;
  }
  printf("%d %d %d", all_apple, count_drop, how_many_groups_drop);
  return 0;
}
