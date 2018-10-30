#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, k;
  int ans = 0;
  bool notlike[10] = {false};
  int t;
  cin >> n >> k;
  for (int i = 0; i < k; ++i) {
    cin >> t;
    notlike[t] = true;
  }
  while (true) {
    int tmp = n;
    while (true) {
      if (tmp == 0) {
        cout << n << "\n";
        return 0;
      }
      if (notlike[tmp % 10])break;
      tmp /= 10;
    }
    n++;
  }
  return 0;
}