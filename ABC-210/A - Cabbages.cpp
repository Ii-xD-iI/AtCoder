using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    long long n, a, x, y;
    cin >> n >> a >> x >> y;

    cout << min(a, n)*x + max(n-a, 0ll)*y << '\n';    
}
