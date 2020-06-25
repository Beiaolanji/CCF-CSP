#include <iostream>

using namespace std;

/*数组train的值用来记录从0-19排,每排座位占用了几个位置,初始的数组元素值为0*/
int train[20];

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int temp;
    scanf("%d", &temp);
    int j = 0;
    /*记录哪一排座位有多*/
    while (5 - train[j] < temp && j++ != 20)
      ;
    /*如果记录排号的j的值不为20,则表明在0-19排中第j排座位足以坐下temp个人数的人*/
    if (j != 20) {
      for (int k = 0; k < temp; k++) printf("%d ", 1 + j * 5 + train[j]++);
      printf("\n");
    } else {
      /*如果记录排号的j的值为20,则表明从0-19排中没有一排放得下temp个人这么多的人,
     那么就不需要考虑相邻的情况,直接往序号小的空位放*/
      int count = 0;
      for (j = 0; j < 20; j++) {
        while (train[j] != 5 && count++ != temp)
          printf("%d ", 1 + j * 5 + train[j]++);
        if (count == temp) {
          printf("\n");
          break;
        }
      }
    }
  }
  return 0;
}
