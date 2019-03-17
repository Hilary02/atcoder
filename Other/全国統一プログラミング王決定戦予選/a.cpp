#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, a, b;
  cin >> n >> a >> b;
  cout << min(a, b) << " " << max(0, a + b - n) << "\n";
  return 0;
}