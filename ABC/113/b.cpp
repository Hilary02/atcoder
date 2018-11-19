#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, tmp;
  int t, a;
  int ans = 0;
  cin >> n;
  cin >> t;
  cin >> a;

  float diff = 900;

  for (int i = 0; i < n; ++i) {
    cin >> tmp;
    float pt = abs(a - (t - tmp * 0.006));
    if (pt < diff) {
      ans = i + 1;
      diff = pt;
    }
  }


  cout << ans << "\n";
  return 0;
}