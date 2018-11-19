#include <iostream>
#include <vector>
#include <ios>
#include <iomanip>
#include <string>
#include <sstream>
#include <set>

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
  vector<set<int>> cyear;
  cin >> n;
  cin >> m;

  for (int i = 0; i < n; i++) {
    set<int> set;
    cyear.push_back(set);
  }

  for (int i = 0; i < m; i++) {
    pref pr;
    cin >> pr.p;
    cin >> pr.y;
    cyear[pr.p - 1].insert(pr.y);
    v.push_back(pr);
  }


  for (int i = 0; i < m; i++) {
    ostringstream  pref;
    ostringstream  city;
    size_t  index = distance(cyear[v[i].p - 1].begin(), cyear[v[i].p - 1].find(v[i].y)) + 1;
    pref << setw(6) << setfill('0') << v[i].p;
    city << setw(6) << setfill('0') << index;

    cout << pref.str() << city.str() << "\n";

  }

  return 0;
}