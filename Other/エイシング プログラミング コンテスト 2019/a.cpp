#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, h, w;
  cin >> n >> h >> w;

  int ans = (n - h + 1) * (n - w + 1);

  cout << ans << "\n";
  return 0;
}