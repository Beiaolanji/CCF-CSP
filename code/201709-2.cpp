#include <iostream>
#include <set>
#include <vector>
using namespace std;

struct TEACHER {
  int keep_key;
  int start;
  int end;
};

int main() {
  int n, k;
  scanf("%d%d", &n, &k);
  vector<int> keys(n + 1);
  vector<int> keys_index(n + 1);
  TEACHER teacher[k];

  for (int i = 0; i <= n; i++) {
    keys[i] = i;
    keys_index[i] = i;
  }

  for (int i = 0; i < k; i++) {
    scanf("%d%d%d", &teacher[i].keep_key, &teacher[i].start, &teacher[i].end);
    teacher[i].end += teacher[i].start;
  }

  /*建立时间轴*/
  set<int> timeline;
  for (int i = 0; i < k; i++) {
    timeline.insert(teacher[i].start);
    timeline.insert(teacher[i].end);
  }

  /*遍历时间轴*/
  for (auto i : timeline) {
    set<int> return_keys;
    /*还钥匙在拿钥匙之前*/
    /*在时间轴为还钥匙时,将所要还的钥匙的编号放进return_keys*/
    for (int j = 0; j < k; j++)
      if (teacher[j].end == i) return_keys.insert(teacher[j].keep_key);

    /*如果return_keys不为空,则表明现在的时间轴是还钥匙的时间轴,
     此时将值置为-1的keys的内容按顺序置为return_keys里面已经升序排好序的内容*/
    if (!return_keys.empty()) {
      for (int j = 1; j <= n; j++) {
        if (return_keys.empty()) break;
        if (keys[j] == -1) {
          int now_hold_key = *return_keys.begin();
          /*更新对应索引的钥匙编号*/
          keys[j] = now_hold_key;
          /*更新钥匙编号对应的索引*/
          keys_index[now_hold_key] = j;
          /*每还完一根钥匙就要把这根钥匙的编号从return_keys里面删除*/
          return_keys.erase(return_keys.begin());
        }
      }
    }

    /*在时间轴为拿钥匙时,将编号所对应的keys的索引对应的值置为-1,
    比如5号钥匙对应索引为3的keys,keys[3]==5,此时将keys[3]置为-1*/
    for (int j = 0; j < k; j++)
      if (teacher[j].start == i) keys[keys_index[teacher[j].keep_key]] = -1;
  }

  for (int i = 1; i <= n; i++) printf("%d ", keys[i]);

  return 0;
}