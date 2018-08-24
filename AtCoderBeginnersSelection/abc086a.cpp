#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b;
  cin >> a >> b;

  string ans;
  if (a * b % 2 == 0) {
    ans = "Even";
  } else {
    ans = "Odd";
  }
  cout << ans << endl;
  return 0;
}