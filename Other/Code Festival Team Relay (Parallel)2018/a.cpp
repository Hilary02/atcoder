#include <iostream>
#include <map>
using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  map<string, string> ans;
  string day[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
  int n;
  cin >> n;
  for (int i = 0; i < 7; i++) {
    ans[day[i]] = day[(i + 1) % 7];
  }
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    cout << ans[s] << "\n";
  }

  return 0;
}