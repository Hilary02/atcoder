#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int m;
  cin >> m;
  int  VV = 0;
  if (m < 100) VV = 0;
  else if (100 <= m && m <= 5000) VV = m / 100;
  else if (6000 <= m && m <= 30000) VV = m / 1000 + 50;
  else if (35000 <= m && m <= 70000) VV = (m / 1000 - 30) / 5 + 80;
  else VV = 89;

  printf("%02d", VV);
  return 0;
}