#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  int ans = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)  {
    cin >> v[i];
  }
  sort(v.begin(), v.end(), greater<int>()); //降順
  ans += v[0] / 2;
  for (int i = 1; i < n; ++i)  {
    ans += v[i];
  }

  cout << ans << "\n";
  return 0;
}