#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  string  a, b, c;
  cin >> n >> a >> b >> c;
  vector<int> max(n);
  int ans = 0;

  for (int i = 0; i < n; i++) {
    vector<int> word(26);
    word[a[i] - 'a']++;
    word[b[i] - 'a']++;
    word[c[i] - 'a']++;
    ans += 3 - *max_element(word.begin(), word.end());
  }

  cout << ans << "\n";
  return 0;
}