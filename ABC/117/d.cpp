#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  long long n, k;
  long long ans = 0;
  cin >> n >> k;
  vector<long long> v(n);
  for (int i = 0; i < n; ++i)  {
    cin >> v[i];
  }
  vector<int> cnt(40, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 40; j++) {
      if ((v[i] >> j) & 1) { //シフトのほうが優先度高いけど、括弧あるほうがきれいな気がする
        cnt[j]++;
      }
    }
  }

  bool underk = false;
  for (long long i = 39; i >= 0; i--) {
    int cnt0 = n - cnt[i];
    int cnt1 = cnt[i];
    //cout << (bool)underk << " " << cnt1 << " " << cnt0 << " " << (1ull << i) << " ";
    if (underk) {
      //既にkを下回っているならば、大きくできる方を取ればいい
      ans += (1ull << i) * max(cnt0, cnt1);
    } else {
      //kのi桁目のbitで分岐する。0なら0にするしかない
      //1なら、0か1を入れることができる。0をいれたら必ず下回るようになる。
      int kbit = k >> i & 1;
      if (kbit == 1) {
        if (cnt1 > cnt0) {
          ans += (1ull << i) * cnt1;
          underk = true;  //ここで0を入れられるのでkを下回ることが確定
        } else {
          ans += (1ull << i) * cnt0; //おとなしくビットを立てる
        }
      } else {
        ans += (1ull << i) * cnt1;//0を入れるしかない
      }
    }
  }

  cout << ans << "\n";
  return 0;
}