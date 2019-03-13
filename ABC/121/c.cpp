#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef pair<long long, int> P;
bool conmPair(const P& firstP, const P& secondP) {
  return firstP.first < secondP.first;
}

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, m;
  long long ans = 0;
  cin >> n >> m;
  vector<P> shop(n);
  for (int i = 0; i < n; ++i)  {
    cin >> shop[i].first >> shop[i].second;
  }
  sort(shop.begin(), shop.end(), conmPair);

  for (int i = 0; i < n; i++) {
    ans += shop[i].first * min(m, shop[i].second);
    m -= shop[i].second;
    if (m <= 0) break;
  }

  cout << ans << "\n";
  return 0;
}