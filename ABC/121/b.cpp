#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, m, c;
  int ans = 0;
  cin >> n >> m >> c;
  vector<int> b(m);
  for (int i = 0; i < m; i++)  {
    cin >> b[i];
  }

  for (int i = 0; i < n; i++) {
    int score = 0;
    int a;
    for (int j = 0; j < m; j++) {
      cin >> a;
      score += a * b[j];
    }
    if (score + c > 0) {ans++;}
  }


  cout << ans << "\n";
  return 0;
}