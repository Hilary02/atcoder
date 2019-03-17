#include <iostream>

using namespace std;

//10進数の各桁の値を合計
int calcSumDigit(int n) {
  int sum = 0;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;

  for (int i = 1; i <= n; ++i)  {
    int tmp = calcSumDigit(i);
    if (a <= tmp && tmp <= b)ans += i;
  }


  cout << ans << endl;
  return 0;
}

