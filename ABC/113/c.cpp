#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

struct city {
  int id;
  int pref;
  ll year;
  int index;
};

bool compID(const city& first, const city& second) {
  return first.id < second.id;
}
bool compYear(const city& first, const city& second) {
  return first.year < second.year;
}

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, m;
  int ans = 0;
  cin >> n >> m;
  vector<city> v(m);
  vector<int> y(n + 1, 0);
  for (int i = 0; i < m; ++i)  {
    v[i].id = i;
    cin >> v[i].pref >> v[i].year;
  }
  sort(v.begin(), v.end(), compYear);
  for (int i = 0; i < m; i++) {
    v[i].index = ++y[v[i].pref]; //評価前に足す
  }

  sort(v.begin(), v.end(), compID);

  for (int i = 0; i < m; i++) {
    printf("%06d%06d\n", v[i].pref, v[i].index);

  }
  return 0;
}