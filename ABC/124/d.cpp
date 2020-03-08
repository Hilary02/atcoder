d.cppa#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, k;
  string s;
  cin >> n >> k >> s;

  int d0 = 0;
  int d1 = 0;

  for (int i = 0; i < s.size(); i++) {
    if (i % 2 == 0) {
      if (s[i] != '0') d0++;
      if (s[i] != '1') d1++;
    } else {
      if (s[i] != '1') d0++;
      if (s[i] != '0') d1++;
    }
  }

  cout << min(d0, d1) << "\n";
  return 0;
}

//まだ