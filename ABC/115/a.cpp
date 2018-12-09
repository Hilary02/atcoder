#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  int ans = 0;
  switch (n) {
  case 25:
    cout << "Christmas" << "\n";
    break;
  case 24:
    cout << "Christmas Eve" << "\n";
    break;
  case 23:
    cout << "Christmas Eve Eve" << "\n";
    break;
  case 22:
    cout << "Christmas Eve Eve Eve" << "\n";
    break;
  }
  return 0;
}