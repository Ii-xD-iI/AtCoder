#include "bits/stdc++.h"
#define len(X) (int)(X).size()
#define elif else if
#define all(X) X.begin( ), X.end()
#define test int t;cin>>t;while(t--)
#define int long long
// #define Int long long
#define ceil(XXX,YYY) (XXX + YYY-1)/YYY 
using namespace std;
const int32_t MAXN = 20,INF = 2e9+7,MOD = 1e9+7;
const long long INFLL = 1e18+7;
void IO(string Bessie);

class day {
    public:
        int a{};
        int b{};
        int c{};

        // day(int a, int b, int c) : a(a), b(b), c(c) {}
};

int32_t main() {
    IO("");//perimeter

    // string s;cin>>s;
    // set<string> nodups;
    
    int n;cin>>n;
    vector<day> v(n),dp(n);
    for(int i=0,x,y,z;i<n;++i) {
        cin>>x>>y>>z;
        v[i].a = x, v[i].b = y, v[i].c = z;
    }

    dp[0] = v[0];
    for(int i=1;i<n;++i) {
        dp[i].a = max(dp[i-1].b , dp[i-1].c) + v[i].a;

        dp[i].b = max(dp[i-1].a , dp[i-1].c) + v[i].b;

        dp[i].c = max(dp[i-1].a , dp[i-1].b) + v[i].c;
    }

    // for(int i {};i<n;++i) {
        // cout << dp[i].a << ' ' << dp[i].b << ' ' << dp[i].c <<'\n';
    // }

    cout << max({ dp[n-1].a , dp[n-1].b , dp[n-1].c });
    return 0;
}

void IO(string Bessie = "") {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);
    if (len(Bessie)) {
        freopen((Bessie+".in").c_str(), "r", stdin);
        freopen((Bessie+".out").c_str(), "w", stdout);
    } 

}
/*
2/3/2021 mm/dd/yyyy
*/
