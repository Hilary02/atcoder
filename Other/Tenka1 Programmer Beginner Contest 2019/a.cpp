#include <iostream>
#include <utility>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b, c;
  cin >> a >> b >> c;

  if (a > b) { swap(a, b);}

  if (a <= c && c <= b) {
    cout << "Yes" << "\n";
  } else {
    cout << "No" << "\n";
  }

  return 0;
}