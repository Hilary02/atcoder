#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s;
  int ans = 0;
  cin >> s;

  int tmp = 0;
  for (auto && c : s) {
    switch (c) {
    case 'A':
    case 'T':
    case 'G':
    case 'C':
      tmp++;
      break;
    default:
      ans = max(ans, tmp);
      tmp = 0;
      break;
    }
  }
  ans = max(ans, tmp);

  cout << ans << "\n";
  return 0;
}