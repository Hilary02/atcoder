#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  double ans = 0;

  int i = 0;
  for (i = 1; i <= n; i++) {
    if (n >= k) {
      n--;
      break;
    }
    int base = int(ceil(log2(k - i + 1)));
    double coin = double(1 >> base);
    cout << base << " "  <<coin<< "\n";
    ans += coin / n;
  }
  if (i> k) {
    ans += 1 - float(i) / n;
  }

  cout << ans << "\n";
  return 0;
}