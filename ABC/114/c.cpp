#include <iostream>

using namespace std;

int target;
int ans = 0;

int calc(string s , bool flag) {
  if (stoi(s) > target)return 0;
  if (!flag) {
    flag = (s.find("3") != std::string::npos && s.find("5") != std::string::npos && s.find("7") != std::string::npos );
  }
  if (flag) {ans++;}
  //cout << s << " " << flag << "\n";

  calc(s + "3", flag);
  calc(s + "5", flag);
  calc(s + "7", flag);
  return 0;
}

/*
3,5,7のみで構成される数字をすべて生成し、それが753であるのかを判定する
*/
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> target;
  calc("0", false);

  cout << ans << "\n";
  return 0;
}