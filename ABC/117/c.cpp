#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> v(m);
  long long ans = 0;

  for (int i = 0; i < m; ++i) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  if (n >= m) {
    cout << ans << "\n";
    return 0;
  }

  vector<int> diff(m - 1);
  for (int i = 0; i < diff.size(); ++i) {
    diff[i] = (v[i + 1] - v[i]);
  }
  sort(diff.begin(), diff.end());

  for (int i = 0; i < m - n; ++i) {
    ans += diff[i];
  }
  cout << ans << endl;
}