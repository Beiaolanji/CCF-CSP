#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

pair<ll, ll> point[1005];
map<pair<ll, ll>, bool> mp;
int cnt[10];

bool check(int x, int y) {
  int res = 0;
  if (mp.count(pii(x - 1, y))) res++;
  if (mp.count(pii(x + 1, y))) res++;
  if (mp.count(pii(x, y - 1))) res++;
  if (mp.count(pii(x, y + 1))) res++;
  return res == 4;
}

int main() {
  ll index[1005];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    point[i] = make_pair(x, y);
    mp[point[i]] = true;
  }
  for (int j = 0; j < n; j++) {
    if (check(point[j].first, point[j].second)) {
      int x = point[j].first;
      int y = point[j].second;
      int res = 0;
      if (mp.count(pii(x - 1, y - 1))) res++;
      if (mp.count(pii(x - 1, y + 1))) res++;
      if (mp.count(pii(x + 1, y + 1))) res++;
      if (mp.count(pii(x + 1, y - 1))) res++;
      cnt[res]++;
    }
  }
  for (int i = 0; i < 5; i++) printf("%d\n", cnt[i]);
  return 0;
}
