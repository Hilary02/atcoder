#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b, c;
  string s;
  cin >> a >> b >> c;
  cin >> s;
  cout << a + b + c << " " << s << endl;
  return 0;
}