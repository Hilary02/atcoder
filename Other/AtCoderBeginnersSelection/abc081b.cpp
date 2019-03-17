#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  int buf;
  int ans = 1000;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int tans = 0;
    cin >> buf;
    for (int j = 0; j < ans; ++j) {
      if (buf % 2 == 1) break;
      tans++;
      buf /= 2;
    }
    if (tans <= ans ) ans = tans;
    if (ans == 0 )break;
  }
  cout << ans << endl;

  return 0;
}