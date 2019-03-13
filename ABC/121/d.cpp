#include <iostream>

using namespace std;

long long xo(long long n) {
  switch (n % 4) {
  case 0:
    return n;
    break;
  case 1:
    return 1;
    break;
  case 2:
    return n + 1;
    break;
  case 3:
    return 0;
    break;
  }
}

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  long long  a, b;
  cin >> a >> b;
  cout << (xo(a - 1) ^ xo(b)) << "\n";

}