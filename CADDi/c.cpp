#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  long long  m;
  cin >> n >> m;
  long long  ans = 1;

  for (long long i = 2; i <= m / n; i++) {
    if (i > m)break;
    int tmp = 0;
    while (m != 0 && m%i == 0) {
      tmp++;
      m /= i;
    }
    for (int j = 0; j < tmp / n; j++) {
      ans *= i;
    }
    /*
    if (tmp / n > 0) {
      ans *= (i, tmp / n);
      cout << tmp / n << "\n";
    }
    */
  }
  cout << ans << "\n";
  return 0;
}