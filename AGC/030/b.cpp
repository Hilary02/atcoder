#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//ループを許す2点間の最短距離
int mindis(int start, int end, int l) {
  if (start - end >= 0) {
    int tmp = start;
    start = end;
    end = tmp;
  }
  int t1 = end - start;
  int sl = start;
  int el = l - end;
  int t2 = sl + el;
  return min(t1, t2);
}

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int l, n, now;
  long long  ans = 0;
  cin >> l >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)  {
    cin >> v[i];
  }
  now = 0;
  for (int i = 0; i < n - 1; i++) {
    int d1 = mindis(now, v.front(), l);
    int d2 = mindis(now, v.back(), l);
    if (d1 == d2) {

    }

    if (d1 > d2) {
      goto d1;
    } else {
      goto d2;
    }
d1:
    ans += d1;
    now = v.front();
    v.erase(v.begin());

    cout << ans << "\n";

    continue;
d2:
    ans += d2;
    now = v.back();
    v.erase(v.begin() + v.size() - 1);

    cout << ans << "\n";
  }
  //最後は長距離
  ans += l - mindis(now, v.front(), l);



  cout << ans << "\n";
  return 0;
}