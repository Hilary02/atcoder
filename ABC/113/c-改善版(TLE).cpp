#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct pref {
  int p;
  int y;
};
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, m;
  vector<pref> v;
  vector<vector<int>> cyear;
  cin >> n;
  cin >> m;

  for (int i = 0; i < n; i++) {
    vector<int> v;
    cyear.push_back(v);
  }

  for (int i = 0; i < m; i++) {
    pref pr;
    cin >> pr.p;
    cin >> pr.y;
    cyear[pr.p - 1].push_back(pr.y);
    v.push_back(pr);
  }
  for (int i = 0; i < n; i++) {
    sort(cyear[i].begin(), cyear[i].end());
  }

  for (int i = 0; i < m; i++) {
    int index;
    int max = cyear[v[i].p - 1].size();
    int cy = v[i].y;
    for (int j = 0; j < max; j++) {
      int ty = cyear[v[i].p - 1][j];
      if (cy == ty) {
        index = j + 1;
        break;
      }
    }
    printf("%06d%06d\n", v[i].p, index);

  }

  return 0;
}