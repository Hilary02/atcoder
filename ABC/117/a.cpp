#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int t, x;
  cin >> t >> x;
  double ans = (double)t / x;
  cout << ans << "\n";
  return 0;
}