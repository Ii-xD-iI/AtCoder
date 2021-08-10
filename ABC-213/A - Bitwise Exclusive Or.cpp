using namespace std;
#define  elif  else if
#include  "bits/stdc++.h"
#define ceil(x,y) (x + y-1)/y
#define len(x)  (int) (x).size()
#define all(x) (x).begin(),(x).end()

#define int long long

int32_t main() {cin.tie(nullptr)->sync_with_stdio(false);
    int a, b; cin >> a >> b;

    for(int i = 0; i <= 255; ++i) {
        if((a xor i) == b) {
            cout << i << '\n';
            return 0;
        }
    }
}
