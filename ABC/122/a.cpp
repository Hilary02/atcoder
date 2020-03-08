#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s;
  string ans;
  cin >> s;

  for (auto && c : s) {
    switch (c) {
    case 'A':
      ans += 'T';
      break;
    case 'T':
      ans += 'A';
      break;
    case 'G':
      ans += 'C';
      break;
    case 'C':
      ans += 'G';
      break;
    }
  }


  cout << ans << "\n";
  return 0;
}