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
  sort(v.begin(), v.end(), greater<int>());

  int a = 0, b = 0;
  bool turnA = true;
  for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
    if (turnA) a += *i;
    else b += *i;
    turnA = !turnA;
  }
  ans = a - b;

  cout << ans << "\n";
  return 0;
}