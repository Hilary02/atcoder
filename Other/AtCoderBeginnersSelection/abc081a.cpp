#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  int ans = 0;

  for (int i = 0; i < 3; ++i)  {
    if (s[i] == '1') ans++;
  }
  cout << ans << endl;
  return 0;
}