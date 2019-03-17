#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  int use500, use100, use50;  //使用済み枚数
  int pat100, pat50; //分割できる個数

  use500 = min(x / 500, a);
  a -= use500;
  x -= 500 * use500;

  use100 = min(x / 100, b);
  b -= use100;
  x -= 100 * use100;

  use50 = min(x / 50, c);
  c -= use50;
  x -= 50 * use50;

  if (x == 0) {
    ans = 1;
    pat100 = min(b / 5 , use500);
    ans += pat100;
    cout << pat100 << endl;
    int tmp = use100;
    for (int i = 0; i <= pat100; ++i)  {
      pat50 = min(c / 2, use100);
      ans += pat50;
      use100 += 5;
    }
    use100 = tmp;

    int end = min(c / 10 , use500);

    for (int i = 1; i < end; ++i){
      use10 +=10;
    }

    cout << ans << endl;

  } else {
    cout << 0 << endl;
  }



  return 0;
}

/*没：無駄に考えすぎ。全探索で十分だった*/