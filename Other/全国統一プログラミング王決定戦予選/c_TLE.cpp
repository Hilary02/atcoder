//愚直すぎてTLEしたやつ
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Asort {
public:
  bool operator()(auto& x, auto& y) const {
    if (x[0] == y[0]) {
      return x[1] > y[1];
    } else {
      return x[0] > y[0];
    }
  }
};

class Bsort {
public:
  bool operator()(auto& x, auto& y) const {
    if (x[1] == y[1]) {
      return x[0] > y[0];
    } else {
      return x[1] > y[1];
    }
  }
};

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  long long a = 0;
  long long b = 0;
  cin >> n;
  vector< *(vector<long long>) > va(n);
  vector< *(vector<long long>) > vb(n);

  for ( int i = 0; i < n; i++ ) {
    vector<long long>  vv(2);
    cin >> vv[0] >> vv[1];
    va[i] =  &vv;
    vb[i] = &vv;
  }

  for (int i = 0; i < n; i++) {
    cout << &va[i] << " " << &vb[i] << "\n";
  }

  sort(va.begin(), va.end(), Asort());
  sort(vb.begin(), vb.end(), Bsort());

  bool isAB = true;



  for (int i = 0; i < n; i++) {
    if (isAB) {
//     a += (&(va.begin()))[0];
      vb.erase(va.erase(va.begin()));

    } else {
      //    b += (&(vb.begin()))[1];
      va.erase(vb.erase(vb.begin()));
    }
    cout << i << "\n";
    isAB = !isAB;
  }


  cout << a - b << "\n";
  return 0;
}