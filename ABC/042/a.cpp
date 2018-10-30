#include <iostream>


using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int c5 = 0;
  int c7 = 0;
  for (int i = 0; i < 3; ++i)  {
    int tmp;
    cin >> tmp;
    if (tmp == 5) c5++;
    else if (tmp == 7) c7++;
  }
  bool ans = (c5 == 2 && c7 == 1);

  if (ans) cout << "YES" << "\n"; else cout << "NO" << "\n";
  return 0;
}