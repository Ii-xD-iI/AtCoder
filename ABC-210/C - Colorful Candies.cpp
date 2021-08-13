using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    
    int n, k; cin >> n >> k;

    vector<int> v(n);
    for(auto& i : v) cin >> i;

    map<int, int> m;
    
    int nodups = INT_MIN;

    for(int i {}; i < k; ++i) {
        m[v[i]]++;
    }

    nodups = len(m);

    for(int i = k; i < n; ++i) {
        m[v[i]]++;
        m[v[i-k]]--;

        if(m[v[i-k]] == 0) m.erase(v[i-k]);

        nodups = max(nodups, len(m));
    }

    cout << nodups << '\n';
}
