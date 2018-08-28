#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void printVec( vector<string> &vec) {
  for (int i = 0; i < vec.size(); ++i) {
    cout << vec[i] << " ";
  }
  cout << "\n" ;
}

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  string tmp;
  string ans;
  vector<string> v;
  cin >> n;
  for (int i = 0; i < n; ++i)  {
    cin >> tmp;
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());

  for (std::vector<string>::iterator i = v.begin(); i != v.end(); ++i) {
    cout << (*i).substr(0, 4) << "\n";
    int st = stoi((*i).substr(0, 4));
    int ed = stoi((*i).substr(5, 4));
    st -= st % 5; //丸める
    ed += ed % 5;
    *i = st + "-" + ed;
  }
  printVec(v);


  for (std::vector<string>::iterator i = v.begin() + 1; i != v.end(); ++i) {
    int bed = stoi((*(i - 1)).substr(5, 4));
    int ast = stoi((*i).substr(0, 4));
    if (ast <= bed) {
      int aed = stoi((*i).substr(5, 4));
      //(*(i - 1)).replace(5, 4, min(bed, aed));
      i = v.erase(i);
    }
    printVec(v);
  }

  cout << ans << "\n";
  return 0;
}