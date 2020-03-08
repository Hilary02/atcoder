#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int  a, b;
  cin >> a >> b;
  int ans = 0;

  ans +=max(a*2-1,max(b*2-1,a+b));
  cout << ans << "\n";
  return 0;
}