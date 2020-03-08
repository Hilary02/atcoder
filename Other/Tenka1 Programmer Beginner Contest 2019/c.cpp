#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  string s;
  cin >> n >> s ;

  int chan_w = 0;
  int chan_b = 0;
  bool changing  = false;
  for (int i = 0; i < n; ++i)  {
    char now = s[i];
    if (now == '#' ) {
      chan_w ++;
      if (!changing) {
        changing = true;
      }
    } else if (changing && now == '.') {
      chan_b ++;
    }
  }


  cout << min(chan_b, chan_w) << "\n";
  return 0;
}