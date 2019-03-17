#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  for (int i = 0; i <= a; ++i)  {
    for (int j = 0; j <= b; ++j) {
      for (int k = 0; k <= c; ++k)      {
        if (i * 500 + j * 100 + k * 50 == x) ans ++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}