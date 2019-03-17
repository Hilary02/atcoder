#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;




int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int h , w;
  char c;
  int ans = 0;

  vector<vector<bool>> v;
  array<int, 401> wa;
  v.reserve(h);
  cin >> h >> w;
  for (int i = 0; i < h; ++i)  {
    vector<bool> vv(w);
    for (int j = 0; j < w; j++) {
      cin >> c;
      if (c == '#') {
        vv[j] = true;
      } else {
        vv[j] = false;
      }
    }
    v.push_back(vv);
  }
  wa[0] = 0;
  for (int i = 2; i < wa.size(); i++)  {
    wa[i] = i + wa[i - 1];
  }

//横方向に探す
  for (int i = 0; i < h; i++) {
    int tmp = 0;
    for (int j = 1; j < w; j++) {
      if (v[i][j] != v[i][j - 1]) {
        cout << tmp << "\n";
        tmp++;
      } else {
        ans += wa[tmp];
        cout << ans << "\n";
        tmp = -1;
      }
    }
  }
  //縦方向
  for (int j = 1; j < w; j++) {
    int tmp = 0;
    for (int i = 0; i < h; i++) {
      if (v[i][j] != v[i - 1][j ]) {
        tmp++;
      } else {
        ans += wa[tmp];
        cout << ans << "\n";

        tmp = -1;
      }
    }
  }

  cout << ans << "\n";
  return 0;
}