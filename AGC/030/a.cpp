#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;
  int ans = b;
  if (c - b >= 0) {
    ans += b;
    c -= b;
  } else {
    ans += c;
    c = 0;
  }

  if (c - a >= 0) {
    ans += a;
    c -= a;
  } else {
    ans += c;
    c = 0;
  }

  if (c > 0) ans++;

  cout << ans << "\n";
  return 0;
}