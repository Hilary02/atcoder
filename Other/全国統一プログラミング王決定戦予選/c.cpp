#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  ll ans = 0;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; ++i)  {
    int a, b;
    cin >> a >> b;
    v[i] = a + b;
    ans -= b;
  }
  sort(v.begin(), v.end(), greater<int>()); //降順

  for (int i = 0; i < n; i += 2) {
    ans += v[i];
  }


  cout << ans << "\n";
  return 0;
}