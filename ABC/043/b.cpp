#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  string ans;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == 'B') {
      if (ans.length() > 0) {
        ans.pop_back();
      }
    } else {
      ans.push_back(s[i]);
    }
  }


  cout << ans << "\n";
  return 0;
}