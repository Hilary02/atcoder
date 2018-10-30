#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  string tmp;
  vector<string> v;
  cin >> n;
  cin >> tmp; //よみとばし
  for (int i = 0; i < n; ++i)  {
    cin >> tmp;
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());

  for (std::vector<string>::iterator i = v.begin(); i != v.end(); ++i) {
    cout << *i;
  }

  cout << "\n";
  return 0;
}