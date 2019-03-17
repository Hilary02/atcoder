#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string s;
  cin >> s;
  int ans = 0;

  int sc = s.find("BW");
  int lc = s.size() - 1;
  bool bw = new bool[s.size()];

  for (int i = 0; i < lc + 1; i++) {
    bw[i] = (s[i] == 'B' ? true : false);
  }

  while (true) {
    int temp = 0;
    int tsc = sc;
    int tlc = 0;

    if (s[tsc] && !s[tsc + 1] ) {
      s[tsc] != s[tsc];
      s[tsc + 1] != s[tsc + 1];
      temp++;
      tsc--;
    }

    for (int i = sc + 1; i < lc ; i++) {
      //cout << s[i] << s[i + 1] << "\n";
      if (s[i] && !s[i + 1] ) {
        s[i] != s[i];
        s[i + 1] != s[i + 1];
        temp++;
        tlc = i;
      }
    }
    if (temp == 0) break;
    ans += temp;
    sc = tsc;
    lc = tlc;
  }

  cout << ans << "\n";
  return 0;
}