#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string n;
  cin >> n;
  int ans = 1e9;
  for (int i = 0; i < n.length() - 2; i++) {
    int t = stoi(n.substr(i, 3));
    int diff = abs(t - 753);
    if ( diff < ans) ans = diff;
  }
  cout << ans << "\n";
  return 0;
}