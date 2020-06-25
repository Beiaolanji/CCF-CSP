#include <iostream>

using namespace std;

int main() {
  int y, d;
  scanf("%d%d", &y, &d);
  int run_flag = -1;
  if ((!(y % 4) && y % 100) || !(y % 400)) {
    run_flag = 1;
  }
  if (d <= 31) {
    printf("1\n%d", d);
    return 0;
  }
  d -= 31;
  if ((d <= 28 && run_flag == -1) || (d <= 29 && run_flag == 1)) {
    printf("2\n%d", d);
    return 0;
  }
  d -= (run_flag == -1 ? 28 : 29);
  if (d <= 31) {
    printf("3\n%d", d);
    return 0;
  }
  d -= 31;
  if (d <= 30) {
    printf("4\n%d", d);
    return 0;
  }
  d -= 30;
  if (d <= 31) {
    printf("5\n%d", d);
    return 0;
  }
  d -= 31;
  if (d <= 30) {
    printf("6\n%d", d);
    return 0;
  }
  d -= 30;
  if (d <= 31) {
    printf("7\n%d", d);
    return 0;
  }
  d -= 31;
  if (d <= 31) {
    printf("8\n%d", d);
    return 0;
  }
  d -= 31;
  if (d <= 30) {
    printf("9\n%d", d);
    return 0;
  }
  d -= 30;
  if (d <= 31) {
    printf("10\n%d", d);
    return 0;
  }
  d -= 31;
  if (d <= 30) {
    printf("11\n%d", d);
    return 0;
  }
  d -= 30;
  if (d <= 31) {
    printf("12\n%d", d);
    return 0;
  }
  return 0;
}
