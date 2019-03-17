#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n, a, b;
  int ans = 0;
  cin >> n >> a >> b;
  vector<int> v(n);
  vector<bool> unuse(n);
  for (int i = 0; i < n; ++i)  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    unuse[i] = true;
  }
  while (true) {
NEW:
    for (int i = 0; i < n; i++) {
      if (v[i] <= a && unuse[i]) {
        unuse[i] = false;
        cout <<"1:"<<v[i]<<" ";

        for (int j = i + 1; j < n; j++) {
          if (a + 1 <= v[j] && v[j] <= b && unuse[j]) {
            unuse[j] = false;
        cout<<"2:"<<v[j]<<" ";


            for (int k = j + 1; k < n; k++) {
              if (b <= v[k] && unuse[k]) {
                unuse[k] = false;
        cout <<"3:"<<v[k]<<"\n";

                ans++;
                goto NEW;
              }
            }
          }
        }
      }
    }
    break;
  }


  cout << ans << "\n";
  return 0;
}