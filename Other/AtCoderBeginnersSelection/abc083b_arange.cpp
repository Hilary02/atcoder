#include <iostream>

using namespace std;
int n, a, b;
int sums[1000001];

//10進数の各桁の値を合計
int calcSumDigit(int n) {
  //cout << n << "\n";
  if (n == 0) return 0;
  else if (sums[n] == 0) sums[n] = n % 10 + calcSumDigit(n / 10);
  return sums[n];
}

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;

  cout << sums[0] << "\n";

  for (int i = 1; i <= n; ++i)  {
    //cout << "i:" << i << "\n";
    int tmp = calcSumDigit(i);
    if (a <= tmp && tmp <= b)ans += i;
  }


  cout << ans << endl;
  return 0;
}

