#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, t, x, y;
  cin >> n;
  int bt = 0;
  int bx = 0 , by = 0;
  string ans = "Yes";
  for (int i = 0; i < n; ++i) {
    cin >> t >> x >> y;
    int move = abs(bx - x) + abs(by - y);
    int dt = t - bt;
    if ((dt - move) % 2 != 0 || dt < move ) ans = "No";

    bt = t;
    bx = x;
    by = y;
  }



  cout << ans << "\n";
  return 0;
}