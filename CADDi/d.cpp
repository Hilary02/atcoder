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



  if (ans) {
    cout << "first" << "\n";
  } else {
    cout << "second" << "\n";
  }

  return 0;
}