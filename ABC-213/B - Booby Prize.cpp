using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()

#define int long long

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(int a, i{}; i < n; ++i) {
        cin >> a;
        v[i] = {a, i+1};
    }
    sort(all(v), greater<pair<int, int>> ());
    // for(auto i : v) cout << i.first << ' ' << i.second << '\n';

    cout << v[1].second << '\n';
}
