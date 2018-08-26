#include <iostream>

using namespace std;

bool isLastStr(const string& s, const string& word) {
  if (s.size() < word.size()) return false;
  return equal(s.end() - word.size(), s.end(), word.begin());
}

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s;
  string words[4] = {"dream", "dreamer", "erase", "eraser"};
  string ans = "NO";
  cin >> s;

  bool find = false;

  while (true) {
    find = false;
    for (int i = 0; i < 4; ++i) {
      if (isLastStr(s, words[i])) {
        s.erase(s.end() - words[i].size(), s.end());
        find = true;
      }
    }
    if (!find) break;
    if (s.size() == 0) {
      ans = "YES";
      break;
    }
  }

  cout << ans << "\n";
  return 0;
}