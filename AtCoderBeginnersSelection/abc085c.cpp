#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, y;
  cin >> n >> y;
  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j <= (n - i); ++j) {
      int k = n - i - j;
      if (10000 * i + 5000 * j + 1000 * k == y && k >= 0) {
        cout << i << " " << j << " " << k << "\n";
        return 0;
      }
    }
  }


  cout << -1 << " " << -1 << " " << -1 << "\n";
  return 0;
}