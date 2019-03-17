#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, h, w;
  int ans = 0;
  cin >> n >> h >> w;
  for (int i = 0; i < n; ++i)  {
    int a, b;

    cin >> a >> b;
    if (a >= h && b >= w)ans++;
  }


  cout << ans << "\n";
  return 0;
}