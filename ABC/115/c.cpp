#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, k;
  int ans = 1e9;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)  {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), greater<int>()); //降順


  for (int i = 0; i < n - k + 1; ++i)  {
    int diff = v[i] - v[i + k - 1];
    //cout << diff << "\n";
    ans = min(ans, diff);
  }

  cout << ans << "\n";
  return 0;
}