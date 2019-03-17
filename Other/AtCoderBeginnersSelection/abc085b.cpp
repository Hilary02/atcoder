#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, tmp;
  int ans = 0;
  vector<int> v;
  cin >> n;
  for (int i = 0; i < n; ++i)  {
    cin >> tmp;
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  v.erase( unique(v.begin(), v.end()), v.end() );

  cout << v.size() << "\n";
  return 0;
}