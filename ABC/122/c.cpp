#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, q, l, r;
  string s;
  int ans = 0;
  cin >> n >> q >> s;

  vector<bool> v(s.size());
  for (int i = 0; i < s.size() - 1; i++) {
    if (s.substr(i, 2) == "AC") {
      v[i] = true;
    }
  }

  int tmp = 0;
  for (int i = 0; i < q; i++) {
    cin >> l >> r;
    cout << count(v.begin() + l - 1, v.begin() + r - 1, true) << "\n";
  }

  return 0;
}