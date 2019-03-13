#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int H, W, h, w;
  cin >> H;
  cin >> W;
  cin >> h;
  cin >> w;
  cout << H*W - W*h - H*w + h*w << "\n";
  return 0;
}