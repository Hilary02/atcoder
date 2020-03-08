#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b) {
  pair<long long, long long> t = std::minmax(a, b);
  if (t.second == 0) {
    return t.first;
  }
  return gcd(t.second, t.first % t.second);
}


int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<long long> v(n);
  vector<long long> ans(n)
  for (int i = 0; i < n; ++i)  {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n; j++) {
      if (i == j)break;
      if (i != j) {
        gcd(v[i], v[i + 1]);
      } else {
        gcd(v[i], v[i + 2]);
      }
    }
  }


  cout << *min_element(ans.begin(), ans.end()); << "\n";
  return 0;
}