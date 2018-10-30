#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  std::vector<int> v;
  cin >> n;
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    int t;
    cin >> t;
    v.push_back(t);
    sum += t;
  }
  int target = (int)(round(sum / (float)n)); //四捨五入

  int ans = 0 ;
  for (int i = 0; i < n; ++i) {
    ans += (v[i] - target) * (v[i] - target) ;
  }


  cout << ans << "\n";
  return 0;
}