#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  int sum = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)  {
    cin >> v[i];
    sum += v[i];
  }
  int max = *max_element(v.begin(), v.end());
  if (2 * max < sum) {
    cout << "Yes" << "\n";
  } else {
    cout << "No" << "\n";
  }
  return 0;
}
