using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    
    int n; cin >> n;
    const int mod = 1e9+7;

    vector<int> v(n);
    for(auto& i : v) cin >> i;
    sort(all(v));

    long long ans = 1;
    //if for any i
    // v[i] < i  (in one-based indexing)
    //then i could just break and return 0

    for(int i = 1; i <= n; ++i) {
        if(v[i-1] < i) {
            cout << 0 << '\n';
            return 0;
        }

        ans *= (v[i-1] - (i-1));
        ans %= mod;
    }

    cout << ans << '\n';
}
